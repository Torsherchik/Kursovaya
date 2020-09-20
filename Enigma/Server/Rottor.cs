using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Server
{
	class Rottor
	{
		public Rottor(char curr_letter, char ControllLetter, char[] input_layer, char[] output_layer)
		{
			this.CurrentLetter = curr_letter;
			this.input_layer = input_layer;
			this.output_layer = output_layer;
			this.ControllLetter = ControllLetter;
		}
		public Rottor(char curr_letter, char[] input_layer, char[] output_layer)
		{
			this.CurrentLetter = curr_letter;
			this.input_layer = input_layer;
			this.output_layer = output_layer;
		}
		public char GetCharForward(char a)
		{
			for (int i = 0; i < 26; i++)
			{
				if (input_layer[i] == a)
				{
					return output_layer[i];
				}
			}
			return (char)0;
		}
		public char GetCharBack(char a)
		{
			for (int i = 0; i < 26; i++)
			{
				if (output_layer[i] == a)
				{
					return input_layer[i];
				}
			}
			return (char)0;
		}
		public int GetCurrentLetter()
		{
			return CurrentLetter;
		}
		
		public char ControllLetter { get; set; }
		public char CurrentLetter{ get; set; }

		char[] input_layer;
		char[] output_layer;
	}
}
