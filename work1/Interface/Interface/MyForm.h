//#pragma once
//#include "../../ADTControl/ADTControl/Control.h"
#include "../../RefControl/RefControl.h"
//#include <msclr\marshal_cppstd.h> 


namespace Interface {
	//using namespace RefControl;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		RefControl::ADTControl * A;
		MyForm()
		{
			InitializeComponent();
			A = new RefControl::ADTControl();
			A->setPin(10);
			A->setPout(10);
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
			 //public: Control _Manager;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::TextBox^  textBox1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(201, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L".";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(89, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(145, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(201, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(89, 165);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(145, 165);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(201, 165);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 6;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(89, 218);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 50);
			this->button8->TabIndex = 7;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Location = System::Drawing::Point(145, 218);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 8;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Location = System::Drawing::Point(201, 218);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 9;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->Location = System::Drawing::Point(275, 109);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 10;
			this->button11->Text = L"A";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Location = System::Drawing::Point(275, 165);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 11;
			this->button12->Text = L"B";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->Location = System::Drawing::Point(275, 221);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 12;
			this->button13->Text = L"C";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Location = System::Drawing::Point(331, 109);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 13;
			this->button14->Text = L"D";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->Location = System::Drawing::Point(331, 165);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 14;
			this->button15->Text = L"E";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button16->Location = System::Drawing::Point(331, 221);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 15;
			this->button16->Text = L"F";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button17->Location = System::Drawing::Point(89, 274);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(106, 50);
			this->button17->TabIndex = 16;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::IndianRed;
			this->button18->Location = System::Drawing::Point(387, 109);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 50);
			this->button18->TabIndex = 17;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button19->Location = System::Drawing::Point(275, 274);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 50);
			this->button19->TabIndex = 18;
			this->button19->Text = L"+ / -";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 8;
			this->trackBar1->Location = System::Drawing::Point(230, 330);
			this->trackBar1->Maximum = 16;
			this->trackBar1->Minimum = 2;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(309, 56);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Value = 10;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(62, 330);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 40);
			this->label1->TabIndex = 19;
			this->label1->Text = L"—истима\r\nсчислени€";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkBlue;
			this->label2->Location = System::Drawing::Point(174, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 38);
			this->label2->TabIndex = 20;
			this->label2->Text = L"10";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button20->Location = System::Drawing::Point(331, 274);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 50);
			this->button20->TabIndex = 21;
			this->button20->Text = L"BS";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(201, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 22);
			this->textBox1->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 416);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
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
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void enableButtons(int n) {
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = false;
		button13->Enabled = false;
		button14->Enabled = false;
		button15->Enabled = false;
		button16->Enabled = false;
		for (int i = 2; i <= n; ++i)
			switch (i)
			{
			case 2: button2->Enabled = true; break;
			case 3: button3->Enabled = true; break;
			case 4: button4->Enabled = true; break;
			case 5: button5->Enabled = true; break;
			case 6: button6->Enabled = true; break;
			case 7: button7->Enabled = true; break;
			case 8: button8->Enabled = true; break;
			case 9: button9->Enabled = true; break;
			case 10: button10->Enabled = true; break;
			case 11: button11->Enabled = true; break;
			case 12: button12->Enabled = true; break;
			case 13: button13->Enabled = true; break;
			case 14: button14->Enabled = true; break;
			case 15: button15->Enabled = true; break;
			case 16: button16->Enabled = true; break;
			default:
				break;
			}
		;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		label2->Text = trackBar1->Value.ToString();
		//A->setPin(A->getPout());
		A->setPout(trackBar1->Value);
		//A->Ed->setNumber(A->DoCommand(19).c_str());
		textBox1->Text = gcnew System::String(A->DoCommand(19).c_str());
		enableButtons(trackBar1->Value);
		////add
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		//A->Ed.AddZero();
		textBox1->Text = gcnew System::String(A->DoCommand(AddZero).c_str());
		//A->Ed->AddZero();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//String^ temp = ;
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(1).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(1).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(2).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(2).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(3).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(3).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(4).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(4).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(5).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(5).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(6).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(6).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(7).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(7).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(8).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(8).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(9).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(9).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(10).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(10).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(11).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(11).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(12).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(12).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(13).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(13).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(14).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(14).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!A->getSt()) {
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(15).c_str());
		}
		else {
			A->Ed->setNumber(A->DoCommand(19).c_str());
			A->setPin(A->getPout());
			textBox1->Text = gcnew System::String(A->Ed->AddDigit(15).c_str());
			A->setSt(false);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = gcnew System::String(A->DoCommand(AddDelim).c_str());
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = gcnew System::String(A->DoCommand(Clear).c_str());
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = gcnew System::String(A->DoCommand(ChangeSign).c_str());
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = gcnew System::String(A->DoCommand(Bs).c_str());
	}
	};

}