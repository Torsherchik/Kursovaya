#pragma once
#include <string>
#include "rottor.h"
#include <iostream>
#using <System.dll>



namespace Enigma1 {
	using namespace System;
	using namespace System::Net;
	using namespace System::Text;
	using namespace System::Net::Sockets;
	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ EnigmaForm
	/// </summary>

	public ref class SimEnigma : public System::Windows::Forms::Form
	{
	public:
		char* alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char* layer1 = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
		char* layer2 = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
		char* layer3 = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
		char* reflect = "YRUHQSLDPXNGOKMIEBFZCWVJAT";

		char rottorInitial1;
		char rottorInitial2;
		char rottorInitial3;

		bool isChanged;
		bool IsCoding;

		int* length = 0;

		Rottor^ rottor1 = gcnew Rottor('A', 'R', alph, layer1);
		Rottor^ rottor2 = gcnew Rottor('A', 'V', alph, layer2);
		Rottor^ rottor3 = gcnew Rottor('A', alph, layer3);
	private: System::Windows::Forms::RadioButton^ CaseCoding;
	private: System::Windows::Forms::RadioButton^ CaseDecoding;
	private: System::Windows::Forms::TextBox^ InputText;
	private: System::Windows::Forms::Button^ SendText;




	public:


	public:
		Rottor^ reflector = gcnew Rottor('A', alph, reflect);

		SimEnigma(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SimEnigma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_rottor1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label_rottor2;
	private: System::Windows::Forms::Label^ label_rottor3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Label^ PonText;



	private: System::Windows::Forms::HelpProvider^ helpProvider1;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_rottor1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label_rottor2 = (gcnew System::Windows::Forms::Label());
			this->label_rottor3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->PonText = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->CaseCoding = (gcnew System::Windows::Forms::RadioButton());
			this->CaseDecoding = (gcnew System::Windows::Forms::RadioButton());
			this->InputText = (gcnew System::Windows::Forms::TextBox());
			this->SendText = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_rottor1
			// 
			this->label_rottor1->AutoSize = true;
			this->label_rottor1->BackColor = System::Drawing::Color::Transparent;
			this->label_rottor1->Location = System::Drawing::Point(203, 72);
			this->label_rottor1->Name = L"label_rottor1";
			this->label_rottor1->Size = System::Drawing::Size(15, 13);
			this->label_rottor1->TabIndex = 0;
			this->label_rottor1->Text = L"Q";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(183, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Down";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SimEnigma::rottor1_down);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(183, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SimEnigma::rottor1_up);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(123, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Up";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SimEnigma::rottor2_up);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(123, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Down";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SimEnigma::rottor2_down);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Location = System::Drawing::Point(63, 30);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(54, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Up";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SimEnigma::rottor3_up);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(63, 102);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(54, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Down";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SimEnigma::rottor3_down);
			// 
			// label_rottor2
			// 
			this->label_rottor2->AutoSize = true;
			this->label_rottor2->BackColor = System::Drawing::Color::Transparent;
			this->label_rottor2->Location = System::Drawing::Point(143, 72);
			this->label_rottor2->Name = L"label_rottor2";
			this->label_rottor2->Size = System::Drawing::Size(15, 13);
			this->label_rottor2->TabIndex = 7;
			this->label_rottor2->Text = L"U";
			// 
			// label_rottor3
			// 
			this->label_rottor3->AutoSize = true;
			this->label_rottor3->BackColor = System::Drawing::Color::Transparent;
			this->label_rottor3->Location = System::Drawing::Point(83, 72);
			this->label_rottor3->Name = L"label_rottor3";
			this->label_rottor3->Size = System::Drawing::Size(14, 13);
			this->label_rottor3->TabIndex = 8;
			this->label_rottor3->Text = L"C";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(184, 345);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(38, 23);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Q";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(228, 344);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(38, 23);
			this->button8->TabIndex = 10;
			this->button8->Text = L"W";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(272, 344);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(38, 23);
			this->button9->TabIndex = 11;
			this->button9->Text = L"E";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(316, 344);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(38, 23);
			this->button10->TabIndex = 12;
			this->button10->Text = L"R";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(360, 344);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(38, 23);
			this->button11->TabIndex = 13;
			this->button11->Text = L"T";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(316, 403);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(38, 23);
			this->button12->TabIndex = 14;
			this->button12->Text = L"X";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(404, 344);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(38, 23);
			this->button13->TabIndex = 15;
			this->button13->Text = L"Z";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(448, 344);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(38, 23);
			this->button14->TabIndex = 16;
			this->button14->Text = L"U";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(492, 344);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(38, 23);
			this->button15->TabIndex = 17;
			this->button15->Text = L"I";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(536, 344);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(38, 23);
			this->button16->TabIndex = 18;
			this->button16->Text = L"O";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(202, 373);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(38, 23);
			this->button17->TabIndex = 19;
			this->button17->Text = L"A";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(246, 373);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(38, 23);
			this->button18->TabIndex = 20;
			this->button18->Text = L"S";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(290, 373);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(38, 23);
			this->button19->TabIndex = 21;
			this->button19->Text = L"D";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button20->Location = System::Drawing::Point(334, 373);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(38, 23);
			this->button20->TabIndex = 22;
			this->button20->Text = L"F";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button21->Location = System::Drawing::Point(378, 373);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(38, 23);
			this->button21->TabIndex = 23;
			this->button21->Text = L"G";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button22->Location = System::Drawing::Point(422, 373);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(38, 23);
			this->button22->TabIndex = 24;
			this->button22->Text = L"H";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button23->Location = System::Drawing::Point(466, 373);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(38, 23);
			this->button23->TabIndex = 25;
			this->button23->Text = L"J";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button24->Location = System::Drawing::Point(510, 373);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(38, 23);
			this->button24->TabIndex = 26;
			this->button24->Text = L"K";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button25->Location = System::Drawing::Point(184, 404);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(38, 22);
			this->button25->TabIndex = 27;
			this->button25->Text = L"P";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button26->Location = System::Drawing::Point(228, 403);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(38, 22);
			this->button26->TabIndex = 28;
			this->button26->Text = L"Y";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button27->Location = System::Drawing::Point(272, 404);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(38, 22);
			this->button27->TabIndex = 29;
			this->button27->Text = L"C";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button28->Location = System::Drawing::Point(360, 404);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(38, 22);
			this->button28->TabIndex = 30;
			this->button28->Text = L"V";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button29->Location = System::Drawing::Point(404, 404);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(38, 22);
			this->button29->TabIndex = 31;
			this->button29->Text = L"B";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button30->Location = System::Drawing::Point(448, 404);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(38, 22);
			this->button30->TabIndex = 32;
			this->button30->Text = L"N";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button31->Location = System::Drawing::Point(492, 404);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(38, 22);
			this->button31->TabIndex = 33;
			this->button31->Text = L"M";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button32->Location = System::Drawing::Point(536, 403);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(38, 23);
			this->button32->TabIndex = 34;
			this->button32->Text = L"L";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &SimEnigma::ButtonPress);
			// 
			// PonText
			// 
			this->PonText->AutoSize = true;
			this->PonText->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->PonText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.00113F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PonText->Location = System::Drawing::Point(354, 217);
			this->PonText->Name = L"PonText";
			this->PonText->Size = System::Drawing::Size(29, 31);
			this->PonText->TabIndex = 36;
			this->PonText->Text = L"_";
			// 
			// CaseCoding
			// 
			this->CaseCoding->AutoSize = true;
			this->CaseCoding->BackColor = System::Drawing::Color::Transparent;
			this->CaseCoding->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->CaseCoding->Location = System::Drawing::Point(516, 53);
			this->CaseCoding->Name = L"CaseCoding";
			this->CaseCoding->Size = System::Drawing::Size(58, 17);
			this->CaseCoding->TabIndex = 37;
			this->CaseCoding->TabStop = true;
			this->CaseCoding->Text = L"Coding";
			this->CaseCoding->UseVisualStyleBackColor = true;
			// 
			// CaseDecoding
			// 
			this->CaseDecoding->AutoSize = true;
			this->CaseDecoding->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CaseDecoding->Location = System::Drawing::Point(516, 77);
			this->CaseDecoding->Name = L"CaseDecoding";
			this->CaseDecoding->Size = System::Drawing::Size(71, 17);
			this->CaseDecoding->TabIndex = 38;
			this->CaseDecoding->TabStop = true;
			this->CaseDecoding->Text = L"Decoding";
			this->CaseDecoding->UseVisualStyleBackColor = false;
			this->CaseDecoding->CheckedChanged += gcnew System::EventHandler(this, &SimEnigma::CaseDecoding_CheckedChanged);
			// 
			// InputText
			// 
			this->InputText->Location = System::Drawing::Point(305, 305);
			this->InputText->Name = L"InputText";
			this->InputText->Size = System::Drawing::Size(127, 20);
			this->InputText->TabIndex = 39;
			// 
			// SendText
			// 
			this->SendText->Location = System::Drawing::Point(438, 304);
			this->SendText->Name = L"SendText";
			this->SendText->Size = System::Drawing::Size(22, 21);
			this->SendText->TabIndex = 40;
			this->SendText->Text = L"V";
			this->SendText->UseVisualStyleBackColor = true;
			this->SendText->Click += gcnew System::EventHandler(this, &SimEnigma::ServerClick_Click);
			// 
			// SimEnigma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(790, 449);
			this->Controls->Add(this->SendText);
			this->Controls->Add(this->InputText);
			this->Controls->Add(this->CaseDecoding);
			this->Controls->Add(this->CaseCoding);
			this->Controls->Add(this->PonText);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label_rottor3);
			this->Controls->Add(this->label_rottor2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_rottor1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Name = L"SimEnigma";
			this->Text = L"SimEnigma";
			this->Load += gcnew System::EventHandler(this, &SimEnigma::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// ѕереключение буквы вперед по алфавиту на первом роторе 
	private: System::Void rottor1_up(System::Object^ sender, System::EventArgs^ e) {
		char a = label_rottor1->Text[0];
		if (a == 'Z') {
			a = 'A';
		}
		else a = (char)((int)a + 1);
		label_rottor1->Text = label_rottor1->Text->Replace(label_rottor1->Text[0], a);
		rottorInitial1 = a;
	}
		   // ѕереключение буквы назад по алфавиту на первом роторе 
	private: System::Void rottor1_down(System::Object^ sender, System::EventArgs^ e) {
		char a = label_rottor1->Text[0];
		if (a == 'A') {
			a = 'Z';
		}
		else a = (char)((int)a - 1);
		label_rottor1->Text = label_rottor1->Text->Replace(label_rottor1->Text[0], a);
		rottorInitial1 = a;
	}
		   // ѕереключение буквы вперед по алфавиту на втором роторе 
	private: System::Void rottor2_up(System::Object^ sender, System::EventArgs^ e) {
		char a = label_rottor2->Text[0];
		isChanged = false;
		if (a == 'Z') {
			a = 'A';
		}
		else a = (char)((int)a + 1);
		label_rottor2->Text = label_rottor2->Text->Replace(label_rottor2->Text[0], a);
		rottorInitial2 = a;
	}
		   // ѕереключение буквы назад по алфавиту на втором роторе 
	private: System::Void rottor2_down(System::Object^ sender, System::EventArgs^ e) {
		char a = label_rottor2->Text[0];
		isChanged = false;
		if (a == 'A') {
			a = 'Z';
		}
		else a = (char)((int)a - 1);
		label_rottor2->Text = label_rottor2->Text->Replace(label_rottor2->Text[0], a);
		rottorInitial2 = a;
	}
		   // ѕереключение буквы вперед по алфавиту на третьем роторе 
	private: System::Void rottor3_up(System::Object^ sender, System::EventArgs^ e) {
		char a = label_rottor3->Text[0];
		if (a == 'Z') {
			a = 'A';
		}
		else a = (char)((int)a + 1);
		label_rottor3->Text = label_rottor3->Text->Replace(label_rottor3->Text[0], a);
		rottorInitial3 = a;
	}
		   // ѕереключение буквы назад по алфавиту на третьем роторе 
	private: System::Void rottor3_down(System::Object^ sender, System::EventArgs^ e) {
		char a = label_rottor3->Text[0];
		if (a == 'A') {
			a = 'Z';
		}
		else a = (char)((int)a - 1);
		label_rottor3->Text = label_rottor3->Text->Replace(label_rottor3->Text[0], a);
		rottorInitial3 = a;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ButtonPress(System::Object^ sender, System::EventArgs^ e) {
		/*
		PonText->Text = "_";
		Button^ button = (Button^)sender;
		int letter = button->Text[0];
		letter -= (int)'A';
		letter = GetCodingParent(letter);

		PonText->Text = PonText->Text->Replace(PonText->Text[0], letter);
		*/
		int port = 8888;
		String^ address = "127.0.0.1";
		TcpClient^ client = nullptr;
		try
		{

			Button^ button = (Button^)sender;
			
			client = gcnew TcpClient(address, port);
			NetworkStream^ stream = dynamic_cast<NetworkStream^>(client->GetStream());
			String^ message = label_rottor1->Text + label_rottor2->Text + label_rottor3->Text + button->Text;
			// преобразуем сообщение в массив байтов
			array<System::Byte>^ data = Encoding::Unicode->GetBytes(message);
			// отправка сообщени€
			stream->Write(data, 0, 2 * message->Length);

			// получаем ответ
			data = gcnew array<System::Byte>(64); // буфер дл€ получаемых данных
			StringBuilder^ builder = gcnew StringBuilder();
			int bytes = 0;
			do
			{
				bytes = stream->Read(data, 0, sizeof(data) / sizeof(System::Byte));
				builder->Append(Encoding::Unicode->GetString(data, 0, bytes));
			} while (stream->DataAvailable);

			message = builder->ToString();
			PonText->Text = message->Substring(3);
			label_rottor1->Text = message[0].ToString();
			label_rottor2->Text = message[1].ToString();
			label_rottor3->Text = message[2].ToString();
		}
		catch (std::exception ex)
		{
			Console::WriteLine("Problem");
		}
		finally
		{
			client->Close();
		}
	}
	private: int GetCodingParent(int letter) {

		letter = GetCoding(letter);
		letter = reflector->GetCharForward(letter + 65);
		letter = GetCodingRevers(letter);

		letter += 65;
		return letter;
	}

	private: int GetCoding(int letter) {
		char a = GetNewChar(label_rottor1->Text[0]);
		char b = GetNewChar(label_rottor2->Text[0]);
		label_rottor1->Text = label_rottor1->Text->Replace(label_rottor1->Text[0], a);
		rottor1->curr_letter = label_rottor1->Text[0];
		if (a == rottor1->ControllLetter) {
			isChanged = true;
			label_rottor2->Text = label_rottor2->Text->Replace(label_rottor2->Text[0], b);
			rottor2->curr_letter = label_rottor2->Text[0];
		}
		a = GetNewChar(label_rottor3->Text[0]);
		if (isChanged && b == rottor2->ControllLetter) {
			isChanged = false;
			label_rottor3->Text = label_rottor3->Text->Replace(label_rottor3->Text[0], a);
			rottor3->curr_letter = label_rottor3->Text[0];
		}


		
		
		
		//»дем на лево.;

		letter = (letter + rottor1->GetCurrentLetter()) % 26; //0
		letter = rottor1->GetCharForward(letter + 65);
		letter = (letter + (rottor2->GetCurrentLetter() - rottor1->GetCurrentLetter())) % 26;
		letter += letter < 0 ? 26 : 0;
		letter = rottor2->GetCharForward(letter + 65);
		letter = (letter + (rottor3->GetCurrentLetter() - rottor2->GetCurrentLetter())) % 26;
		letter += letter < 0 ? 26 : 0;
		letter = rottor3->GetCharForward(letter + 65);
		letter = (letter - rottor3->GetCurrentLetter()) % 26;
		letter += letter < 0 ? 26 : 0;

		return letter;
	}

	private: int GetCodingRevers(int letter) {
		letter = (letter + rottor3->GetCurrentLetter()) % 26;
		letter = rottor3->GetCharBack(letter + 65);
		letter = (letter - (rottor3->GetCurrentLetter() - rottor2->GetCurrentLetter())) % 26;
		letter += letter < 0 ? 26 : 0;
		letter = rottor2->GetCharBack(letter + 65);
		letter = (letter - (rottor2->GetCurrentLetter() - rottor1->GetCurrentLetter())) % 26;
		letter += letter < 0 ? 26 : 0;
		letter = rottor1->GetCharBack(letter + 65);
		letter = letter - rottor1->GetCurrentLetter();
		letter += letter < 0 ? 26 : 0;

		return letter;
	}

	private: System::Char GetNewChar(char a) {
		if (a == 'Z') {
			a = 'A';
		}
		else a = (char)((int)a + 1);

		return a;
	}

	private: System::Void CaseDecoding_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		IsCoding = false;
		label_rottor1->Text = label_rottor1->Text->Replace(label_rottor1->Text[0], rottorInitial1);
		label_rottor2->Text = label_rottor2->Text->Replace(label_rottor2->Text[0], rottorInitial2);
		label_rottor3->Text = label_rottor3->Text->Replace(label_rottor3->Text[0], rottorInitial3);
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		rottorInitial1 = label_rottor1->Text[0];
		rottorInitial2 = label_rottor2->Text[0];
		rottorInitial3 = label_rottor3->Text[0];
	}
	private: System::Void SendText_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ input = InputText->Text;
		std::string tempInput = "";
		std::string tempOutput = "";

		if (input == "")
			return;

		for (int i = 0; i < input->Length; i++) {
			tempInput += toupper((char)input[i]);
		}
		for (int i = 0; i < input->Length; i++) {
			tempOutput += GetCodingParent(tempInput[i] - 'A');
		}


		String^ output = gcnew System::String(tempOutput.c_str());
		PonText->Text = output;
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Server() {
		int port = 8888;
		String^ address = "127.0.0.1";
		TcpClient^ client = nullptr;
		try
		{
			client = gcnew TcpClient(address, port);
			NetworkStream^ stream = dynamic_cast<NetworkStream^>(client->GetStream());
			String^ message = label_rottor1->Text + label_rottor2->Text + label_rottor3->Text + InputText->Text;
			// преобразуем сообщение в массив байтов
			array<System::Byte>^ data = Encoding::Unicode->GetBytes(message);
			// отправка сообщени€
			stream->Write(data, 0, 2 * message->Length);

			// получаем ответ
			data = gcnew array<System::Byte>(64); // буфер дл€ получаемых данных
			StringBuilder^ builder = gcnew StringBuilder();
			int bytes = 0;
			do
			{
				bytes = stream->Read(data, 0, sizeof(data) / sizeof(System::Byte));
				builder->Append(Encoding::Unicode->GetString(data, 0, bytes));
			} while (stream->DataAvailable);

			message = builder->ToString();
			PonText->Text = message->Substring(3);
			label_rottor1->Text = message[0].ToString();
			label_rottor2->Text = message[1].ToString();
			label_rottor3->Text = message[2].ToString();
		}
		catch (std::exception ex)
		{
			Console::WriteLine("Problem");
		}
		finally
		{
			client->Close();
		}
	}
	private: System::Void ServerClick_Click(System::Object^ sender, System::EventArgs^ e) {
		Server();
	}
};
}
