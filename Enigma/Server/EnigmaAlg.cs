using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Server
{
    static class EnigmaAlg
    {
        public static string EncryptText(Rottor[] rottors, Rottor reflector, string text)
        {
            string encryptedText = "";
            foreach(char letter in text)
            {
                rottors = SwitchRottors(rottors);
                encryptedText += EncryptLetter(rottors, reflector, letter);
            }
            string newRottors = "";
            newRottors += (char)(rottors[0].CurrentLetter );
            newRottors += (char)(rottors[1].CurrentLetter );
            newRottors += (char)(rottors[2].CurrentLetter );
            return newRottors + encryptedText;
        }

        public static char EncryptLetter(Rottor[] rottors, Rottor reflector, char letter)
        {
            letter = SumChars(letter, rottors[0].CurrentLetter);
            letter = rottors[0].GetCharForward(letter);
            letter = SumChars(letter, SubChars(rottors[1].CurrentLetter, rottors[0].CurrentLetter));
            letter = rottors[1].GetCharForward(letter);
            letter = SumChars(letter, SubChars(rottors[2].CurrentLetter, rottors[1].CurrentLetter));
            letter = rottors[2].GetCharForward(letter);
            letter = SubChars(letter, rottors[2].CurrentLetter);

            letter = reflector.GetCharForward(letter);

            letter = SumChars(letter, rottors[2].CurrentLetter);
            letter = rottors[2].GetCharBack(letter);
            letter = SubChars(letter, SubChars(rottors[2].CurrentLetter, rottors[1].CurrentLetter));
            letter = rottors[1].GetCharBack(letter);
            letter = SubChars(letter, SubChars(rottors[1].CurrentLetter, rottors[0].CurrentLetter));
            letter = rottors[0].GetCharBack(letter);
            letter = SubChars(letter, rottors[0].CurrentLetter);

            return letter;
        }

        private static char NextLetter(char a)
        {
            if (a == 'Z') return 'A';
            else return ++a;
        }

        private static char PreviousLetter(char a)
        {
            if (a == 'A') return 'Z';
            else return --a;
        }

        private static char SumChars(char a, char b)
        {
            int newChar = (a + b - 2 * 'A') % 26;
            return (char)(newChar + 'A');
        }

        private static char SubChars(char a, char b)
        {
            int newChar = (a - b + 26) % 26;
            return (char)(newChar + 'A');
        }

        private static Rottor[] SwitchRottors(Rottor[] rottors)
        {
            rottors[0].CurrentLetter = NextLetter(rottors[0].CurrentLetter);
            if (rottors[0].CurrentLetter == rottors[0].ControllLetter)
            {
                rottors[1].CurrentLetter = NextLetter(rottors[1].CurrentLetter);
                if (rottors[1].CurrentLetter == rottors[1].ControllLetter)
                    rottors[2].CurrentLetter = NextLetter(rottors[2].CurrentLetter);
            }
            return rottors;
        }

    }
}

