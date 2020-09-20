using System;
using System.Net.Sockets;
using System.Text;
using System.Windows.Forms;

namespace Server
{
    public class ClientObject
    {
        public TcpClient client;
        public ClientObject(TcpClient tcpClient)
        {
            client = tcpClient;
        }

        public void Process()
        {
            NetworkStream stream = null;
            try
            {
                stream = client.GetStream();
                byte[] data = new byte[64]; // буфер для получаемых данных
                while (true)
                {
                    // получаем сообщение
                    StringBuilder builder = new StringBuilder();
                    int bytes = 0;
                    do
                    {
                        bytes = stream.Read(data, 0, data.Length);
                        builder.Append(Encoding.Unicode.GetString(data, 0, bytes));
                    }
                    while (stream.DataAvailable);

                    string message = builder.ToString();
                    if (message.Length > 0) Console.WriteLine("Input: " + message.Substring(0, 3) + " " + message.Substring(3));

                    char[] alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".ToCharArray();
                    char[] layer1 = "EKMFLGDQVZNTOWYHXUSPAIBRCJ".ToCharArray();
                    char[] layer2 = "AJDKSIRUXBLHWTMCQGZNPYFVOE".ToCharArray();
                    char[] layer3 = "BDFHJLCPRTXVZNYEIWGAKMUSQO".ToCharArray();
                    char[] reflect = "YRUHQSLDPXNGOKMIEBFZCWVJAT".ToCharArray();

                    Rottor[] rottors =
                    {
                        new Rottor(message[0], 'R', alph, layer1),
                        new Rottor(message[1], 'V', alph, layer2),
                        new Rottor(message[2], alph, layer3)
                    };

                    Rottor reflector = new Rottor('A', alph, reflect);

                    message = EnigmaAlg.EncryptText(rottors, reflector, message.Substring(3).ToUpper());

                    Console.WriteLine("Output: " + message.Substring(0, 3) + " " + message.Substring(3));
                    data = Encoding.Unicode.GetBytes(message);
                    stream.Write(data, 0, data.Length);
                }
            }
            catch (Exception ex)
            {
                try
                {
                    IndexOutOfRangeException newEx = (IndexOutOfRangeException)ex;
                }
                catch(Exception exe)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            finally
            {
                if (stream != null)
                    stream.Close();
                if (client != null)
                    client.Close();
            }
        }
    }
}