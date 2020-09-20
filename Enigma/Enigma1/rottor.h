#pragma once

ref class Rottor
{
public:
	int GetCharForward(char a);
	int GetCharBack(char a);
	int GetCurrentLetter();
	Rottor(char curr_letter,char ControllLetter, char* input_layer, char* output_layer);
	Rottor(char curr_letter, char* input_layer, char* output_layer);
	char ControllLetter;
	char curr_letter;
	char* input_layer;
	char* output_layer;

};

