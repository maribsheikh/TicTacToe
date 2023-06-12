#pragma once

namespace previouspr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ box9;
	private: System::Windows::Forms::Button^ box8;
	private: System::Windows::Forms::Button^ box7;
	private: System::Windows::Forms::Button^ box6;
	private: System::Windows::Forms::Button^ box5;
	private: System::Windows::Forms::Button^ box4;

	private: System::Windows::Forms::Button^ box2;
	private: System::Windows::Forms::Button^ box1;
	private: System::Windows::Forms::Label^ winlabel;

	private: System::Windows::Forms::Button^ rstrt;
	private: System::Windows::Forms::Label^ lblscoreO;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblscoreX;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ box3;
	private: System::Windows::Forms::Button^ new1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->box3 = (gcnew System::Windows::Forms::Button());
			this->box9 = (gcnew System::Windows::Forms::Button());
			this->box8 = (gcnew System::Windows::Forms::Button());
			this->box7 = (gcnew System::Windows::Forms::Button());
			this->box6 = (gcnew System::Windows::Forms::Button());
			this->box5 = (gcnew System::Windows::Forms::Button());
			this->box4 = (gcnew System::Windows::Forms::Button());
			this->box2 = (gcnew System::Windows::Forms::Button());
			this->box1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->new1 = (gcnew System::Windows::Forms::Button());
			this->winlabel = (gcnew System::Windows::Forms::Label());
			this->rstrt = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lblscoreO = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblscoreX = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1426, 126);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Location = System::Drawing::Point(-2, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1426, 124);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TICTACTOE GAME";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->box3);
			this->panel2->Controls->Add(this->box9);
			this->panel2->Controls->Add(this->box8);
			this->panel2->Controls->Add(this->box7);
			this->panel2->Controls->Add(this->box6);
			this->panel2->Controls->Add(this->box5);
			this->panel2->Controls->Add(this->box4);
			this->panel2->Controls->Add(this->box2);
			this->panel2->Controls->Add(this->box1);
			this->panel2->Location = System::Drawing::Point(0, 132);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(663, 580);
			this->panel2->TabIndex = 1;
			// 
			// box3
			// 
			this->box3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box3->ForeColor = System::Drawing::Color::Black;
			this->box3->Location = System::Drawing::Point(433, 28);
			this->box3->Name = L"box3";
			this->box3->Size = System::Drawing::Size(197, 115);
			this->box3->TabIndex = 9;
			this->box3->Text = L" ";
			this->box3->UseVisualStyleBackColor = true;
			this->box3->Click += gcnew System::EventHandler(this, &MyForm::box3_Click);
			// 
			// box9
			// 
			this->box9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box9->Location = System::Drawing::Point(435, 298);
			this->box9->Name = L"box9";
			this->box9->Size = System::Drawing::Size(195, 119);
			this->box9->TabIndex = 8;
			this->box9->Text = L" ";
			this->box9->UseVisualStyleBackColor = true;
			this->box9->Click += gcnew System::EventHandler(this, &MyForm::box9_Click);
			// 
			// box8
			// 
			this->box8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box8->Location = System::Drawing::Point(221, 298);
			this->box8->Name = L"box8";
			this->box8->Size = System::Drawing::Size(195, 119);
			this->box8->TabIndex = 7;
			this->box8->Text = L" ";
			this->box8->UseVisualStyleBackColor = true;
			this->box8->Click += gcnew System::EventHandler(this, &MyForm::box8_Click);
			// 
			// box7
			// 
			this->box7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box7->Location = System::Drawing::Point(10, 298);
			this->box7->Name = L"box7";
			this->box7->Size = System::Drawing::Size(195, 119);
			this->box7->TabIndex = 6;
			this->box7->Text = L" ";
			this->box7->UseVisualStyleBackColor = true;
			this->box7->Click += gcnew System::EventHandler(this, &MyForm::box7_Click);
			// 
			// box6
			// 
			this->box6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box6->Location = System::Drawing::Point(435, 158);
			this->box6->Name = L"box6";
			this->box6->Size = System::Drawing::Size(195, 119);
			this->box6->TabIndex = 5;
			this->box6->Text = L" ";
			this->box6->UseVisualStyleBackColor = true;
			this->box6->Click += gcnew System::EventHandler(this, &MyForm::box6_Click);
			// 
			// box5
			// 
			this->box5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box5->Location = System::Drawing::Point(221, 158);
			this->box5->Name = L"box5";
			this->box5->Size = System::Drawing::Size(195, 119);
			this->box5->TabIndex = 4;
			this->box5->Text = L" ";
			this->box5->UseVisualStyleBackColor = true;
			this->box5->Click += gcnew System::EventHandler(this, &MyForm::box5_Click);
			// 
			// box4
			// 
			this->box4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box4->Location = System::Drawing::Point(11, 158);
			this->box4->Name = L"box4";
			this->box4->Size = System::Drawing::Size(195, 119);
			this->box4->TabIndex = 3;
			this->box4->Text = L" ";
			this->box4->UseVisualStyleBackColor = true;
			this->box4->Click += gcnew System::EventHandler(this, &MyForm::box4_Click);
			// 
			// box2
			// 
			this->box2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box2->Location = System::Drawing::Point(221, 26);
			this->box2->Name = L"box2";
			this->box2->Size = System::Drawing::Size(195, 117);
			this->box2->TabIndex = 1;
			this->box2->Text = L" ";
			this->box2->UseVisualStyleBackColor = true;
			this->box2->Click += gcnew System::EventHandler(this, &MyForm::box2_Click_1);
			// 
			// box1
			// 
			this->box1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box1->Location = System::Drawing::Point(11, 26);
			this->box1->Name = L"box1";
			this->box1->Size = System::Drawing::Size(195, 117);
			this->box1->TabIndex = 0;
			this->box1->Text = L" ";
			this->box1->UseVisualStyleBackColor = true;
			this->box1->Click += gcnew System::EventHandler(this, &MyForm::box1_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->new1);
			this->panel3->Controls->Add(this->winlabel);
			this->panel3->Controls->Add(this->rstrt);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(669, 132);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(740, 433);
			this->panel3->TabIndex = 2;
			// 
			// new1
			// 
			this->new1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->new1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->new1->Location = System::Drawing::Point(81, 343);
			this->new1->Name = L"new1";
			this->new1->Size = System::Drawing::Size(588, 74);
			this->new1->TabIndex = 9;
			this->new1->Text = L"NEWGAME";
			this->new1->UseVisualStyleBackColor = false;
			this->new1->Click += gcnew System::EventHandler(this, &MyForm::new1_Click);
			// 
			// winlabel
			// 
			this->winlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->winlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->winlabel->Location = System::Drawing::Point(3, 179);
			this->winlabel->Name = L"winlabel";
			this->winlabel->Size = System::Drawing::Size(666, 48);
			this->winlabel->TabIndex = 8;
			this->winlabel->Text = L"WINNER";
			this->winlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rstrt
			// 
			this->rstrt->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rstrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstrt->Location = System::Drawing::Point(81, 257);
			this->rstrt->Name = L"rstrt";
			this->rstrt->Size = System::Drawing::Size(588, 80);
			this->rstrt->TabIndex = 6;
			this->rstrt->Text = L"RESTART";
			this->rstrt->UseVisualStyleBackColor = false;
			this->rstrt->Click += gcnew System::EventHandler(this, &MyForm::rstrt_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->lblscoreO);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->lblscoreX);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(-2, -2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(740, 164);
			this->panel4->TabIndex = 3;
			// 
			// lblscoreO
			// 
			this->lblscoreO->BackColor = System::Drawing::SystemColors::Control;
			this->lblscoreO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblscoreO->Location = System::Drawing::Point(303, 83);
			this->lblscoreO->Name = L"lblscoreO";
			this->lblscoreO->Size = System::Drawing::Size(260, 46);
			this->lblscoreO->TabIndex = 3;
			this->lblscoreO->Text = L"0";
			this->lblscoreO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(41, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(220, 46);
			this->label4->TabIndex = 2;
			this->label4->Text = L"PLAYER O";
			// 
			// lblscoreX
			// 
			this->lblscoreX->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblscoreX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblscoreX->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblscoreX->Location = System::Drawing::Point(307, 16);
			this->lblscoreX->Name = L"lblscoreX";
			this->lblscoreX->Size = System::Drawing::Size(250, 45);
			this->lblscoreX->TabIndex = 1;
			this->lblscoreX->Text = L"0";
			this->lblscoreX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(33, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 45);
			this->label2->TabIndex = 0;
			this->label2->Text = L"PLAYER X";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1427, 573);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}Boolean checker;
		int addone;
#pragma endregion
		void Enable()
		{
			box1->Enabled = false;
			box2->Enabled = false;
			box3->Enabled = false;
			box4->Enabled = false;
			box5->Enabled = false;
			box6->Enabled = false;
			box7->Enabled = false;
			box8->Enabled = false;
			box9->Enabled = false;
			new1->Enabled = true;
			rstrt->Enabled = true;
		}
		void score()
		{
			if (box1->Text == L"X" && box2->Text == L"X" && box3->Text == L"X")
			{
				box1->BackColor = System::Drawing::Color::DarkGray;
				box2->BackColor = System::Drawing::Color::DarkGray;
				box3->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();
			}
			else if (box4->Text == L"X" && box5->Text == L"X" && box6->Text == L"X")
			{
				box4->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box6->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();
			}
			else if (box7->Text == L"X" && box8->Text == L"X" && box9->Text == L"X")
			{
				box7->BackColor = System::Drawing::Color::DarkGray;
				box8->BackColor = System::Drawing::Color::DarkGray;
				box9->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box1->Text == L"X" && box5->Text == L"X" && box9->Text == L"X")
			{
				box1->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box9->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box3->Text == L"X" && box5->Text == L"X" && box7->Text == L"X")
			{
				box3->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box7->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box1->Text == L"X" && box4->Text == L"X" && box7->Text == L"X")
			{
				box1->BackColor = System::Drawing::Color::DarkGray;
				box4->BackColor = System::Drawing::Color::DarkGray;
				box7->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box2->Text == L"X" && box5->Text == L"X" && box8->Text == L"X")
			{
				box2->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box8->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box3->Text == L"X" && box6->Text == L"X" && box9->Text == L"X")
			{
				box3->BackColor = System::Drawing::Color::DarkGray;
				box6->BackColor = System::Drawing::Color::DarkGray;
				box9->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER X";
				addone = int::Parse(lblscoreX->Text);
				lblscoreX->Text = Convert::ToString(addone + 1);
				Enable();

			}
			//==========================================================================================================

			else if (box1->Text == L"O" && box2->Text == L"O" && box3->Text == L"O")
			{
				box1->BackColor = System::Drawing::Color::DarkGray;
				box2->BackColor = System::Drawing::Color::DarkGray;
				box3->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box4->Text == L"O" && box5->Text == L"O" && box6->Text == L"O")
			{
				box4->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box6->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box7->Text == L"O" && box8->Text == L"O" && box9->Text == L"O")
			{
				box7->BackColor = System::Drawing::Color::DarkGray;
				box8->BackColor = System::Drawing::Color::DarkGray;
				box9->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box1->Text == L"O" && box5->Text == L"O" && box9->Text == L"O")
			{
				box1->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box9->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box3->Text == L"O" && box5->Text == L"O" && box7->Text == L"O")
			{
				box3->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box7->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box1->Text == L"O" && box4->Text == L"O" && box7->Text == L"O")
			{
				box1->BackColor = System::Drawing::Color::DarkGray;
				box4->BackColor = System::Drawing::Color::DarkGray;
				box7->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box2->Text == L"O" && box5->Text == L"O" && box8->Text == L"O")
			{
				box2->BackColor = System::Drawing::Color::DarkGray;
				box5->BackColor = System::Drawing::Color::DarkGray;
				box8->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if (box3->Text == L"O" && box6->Text == L"O" && box9->Text == L"O")
			{
				box3->BackColor = System::Drawing::Color::DarkGray;
				box6->BackColor = System::Drawing::Color::DarkGray;
				box9->BackColor = System::Drawing::Color::DarkGray;
				winlabel->Text = L"THE WINNER IS PLAYER O";
				addone = int::Parse(lblscoreO->Text);
				lblscoreO->Text = Convert::ToString(addone + 1);
				Enable();

			}
			else if ((box1->Text == L"O" || box1->Text == L"X") && (box2->Text == L"O" || box2->Text == L"X") && (box3->Text == L"O" || box3->Text == L"X") && (box4->Text == L"O" || box4->Text == L"X") && (box5->Text == L"O" || box5->Text == L"X") && (box6->Text == L"O" || box6->Text == L"X") && (box7->Text == L"O" || box7->Text == L"X") && (box8->Text == L"O" || box8->Text == L"X") && (box9->Text == L"X" || box9->Text == L"O"))
			{
				winlabel->Text = L"THE MATCH IS DRAW ";
				Enable();
			}

			//========================================================================================================================
		}
	private: System::Void box1_Click(System::Object^ sender, System::EventArgs^ e) {


		if (checker == false)
		{
			box1->Text = L"X";
			checker = true;
		}
		else
		{
			box1->Text = L"O";
			checker = false;
		}
		score();
		box1->Enabled = false;
	}

	private: System::Void box2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box2->Text = L"X";
			checker = true;
		}
		else
		{
			box2->Text = L"O";
			checker = false;
		}
		score();
		box2->Enabled = false;
	}

	private: System::Void box4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box4->Text = L"X";
			checker = true;
		}
		else
		{
			box4->Text = L"O";
			checker = false;
		}
		score();
		box4->Enabled = false;


	}
	private: System::Void box5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box5->Text = L"X";
			checker = true;
		}
		else
		{
			box5->Text = L"O";
			checker = false;
		}
		score();
		box5->Enabled = false;
	}

	private: System::Void box6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box6->Text = L"X";
			checker = true;
		}
		else
		{
			box6->Text = L"O";
			checker = false;
		}
		score();
		box6->Enabled = false;
	}
	private: System::Void box7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box7->Text = L"X";
			checker = true;
		}
		else
		{
			box7->Text = L"O";
			checker = false;
		}
		score();
		box7->Enabled = false;
	}
	private: System::Void box8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box8->Text = L"X";
			checker = true;
		}
		else
		{
			box8->Text = L"O";
			checker = false;
		}
		score();
		box8->Enabled = false;
	}
	private: System::Void box9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box9->Text = L"X";
			checker = true;
		}
		else
		{
			box9->Text = L"O";
			checker = false;
		}
		score();
		box9->Enabled = false;
	}
	private: System::Void rstrt_Click(System::Object^ sender, System::EventArgs^ e) {
		//RESTART THE GAME FUNCTION
		box1->Text = L" ";
		box2->Text = L" ";
		box3->Text = L" ";
		box4->Text = L" ";
		box5->Text = L" ";
		box6->Text = L" ";
		box7->Text = L" ";
		box8->Text = L" ";
		box9->Text = L" ";

		box1->Enabled = true;
		box2->Enabled = true;
		box3->Enabled = true;
		box4->Enabled = true;
		box5->Enabled = true;
		box6->Enabled = true;
		box7->Enabled = true;
		box8->Enabled = true;
		box9->Enabled = true;
		new1->Enabled = true;

		box1->BackColor = System::Drawing::Color::White;
		box2->BackColor = System::Drawing::Color::White;
		box3->BackColor = System::Drawing::Color::White;
		box4->BackColor = System::Drawing::Color::White;
		box5->BackColor = System::Drawing::Color::White;
		box6->BackColor = System::Drawing::Color::White;
		box7->BackColor = System::Drawing::Color::White;
		box8->BackColor = System::Drawing::Color::White;
		box9->BackColor = System::Drawing::Color::White;

	}
	private: System::Void box3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			box3->Text = L"X";
			checker = true;
		}
		else
		{
			box3->Text = L"O";
			checker = false;
		}
		score();
		box3->Enabled = false;
	}
	private: System::Void new1_Click(System::Object^ sender, System::EventArgs^ e) {
		box1->Text = L" ";
		box2->Text = L" ";
		box3->Text = L" ";
		box4->Text = L" ";
		box5->Text = L" ";
		box6->Text = L" ";
		box7->Text = L" ";
		box8->Text = L" ";
		box9->Text = L" ";
		lblscoreO->Text = L"0";
		lblscoreX->Text = L"0";
		winlabel->Text = L"WINNER";


		box1->Enabled = true;
		box2->Enabled = true;
		box3->Enabled = true;
		box4->Enabled = true;
		box5->Enabled = true;
		box6->Enabled = true;
		box7->Enabled = true;
		box8->Enabled = true;
		box9->Enabled = true;
		new1->Enabled = true;


		box1->BackColor = System::Drawing::Color::White;
		box2->BackColor = System::Drawing::Color::White;
		box3->BackColor = System::Drawing::Color::White;
		box4->BackColor = System::Drawing::Color::White;
		box5->BackColor = System::Drawing::Color::White;
		box6->BackColor = System::Drawing::Color::White;
		box7->BackColor = System::Drawing::Color::White;
		box8->BackColor = System::Drawing::Color::White;
		box9->BackColor = System::Drawing::Color::White;

	
    }
};
}