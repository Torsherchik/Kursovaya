#include "rottor.h"

int Rottor::GetCharForward(char a)
{
	for (int i = 0; i < 26; i++) {
		if (*(input_layer + i) == a) {
			return (int) * (output_layer + i) - (int)'A';
		} 
	}
	return 0;
}

int Rottor::GetCharBack(char a)
{
	for (int i = 0; i < 26; i++) {
		if (*(output_layer + i) == a) {
			return (int) * (input_layer + i) - (int)'A';
		}
	}
	return 0;
}

int Rottor::GetCurrentLetter()
{
	return (int)curr_letter - (int)'A';
}

Rottor::Rottor(char curr_letter, char ControllLetter, char* input_layer, char* output_layer)
{
	this->ControllLetter = ControllLetter;
	this->curr_letter = curr_letter;
	this->input_layer = input_layer;
	this->output_layer = output_layer;

}

Rottor::Rottor(char curr_letter, char* input_layer, char* output_layer)
{
	this->curr_letter = curr_letter;
	this->input_layer = input_layer;
	this->output_layer = output_layer;
}
