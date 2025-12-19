#pragma once
#include<conio.h>
#include<math.h>  
double ans, a, b;
int flag = 0;
using namespace std;
namespace SCacl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for SCalc
	/// </summary>
	public ref class SCalc : public System::Windows::Forms::Form
	{
	public:
		SCalc(void)
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
		~SCalc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ FromIntro;
	private: System::Windows::Forms::Label^ TitleBar;

	private: System::Windows::Forms::Button^ B1;
	private: System::Windows::Forms::Button^ B2;
	private: System::Windows::Forms::Button^ B3;
	private: System::Windows::Forms::Button^ B4;
	private: System::Windows::Forms::Button^ B5;
	private: System::Windows::Forms::Button^ B6;
	private: System::Windows::Forms::Button^ B7;
	private: System::Windows::Forms::Button^ B8;
	private: System::Windows::Forms::Button^ B9;
	private: System::Windows::Forms::Button^ B0;
	private: System::Windows::Forms::Button^ B11;
	private: System::Windows::Forms::Button^ Mul;
	private: System::Windows::Forms::Button^ Min;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ Eq;








	private: System::Windows::Forms::Button^ Div;
	private: System::Windows::Forms::Button^ del;


	private: System::Windows::Forms::Button^ Root;

	private: System::Windows::Forms::Button^ Mod;
	private: System::Windows::Forms::TextBox^ InputA;
	private: System::Windows::Forms::TextBox^ InputB;
	private: System::Windows::Forms::TextBox^ Res;
	private: System::Windows::Forms::Label^ Sign;
	private: System::Windows::Forms::Label^ Op;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ FocusA;

	private: System::Windows::Forms::Button^ FocusB;







	private:
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FromIntro = (gcnew System::Windows::Forms::Label());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->B6 = (gcnew System::Windows::Forms::Button());
			this->B7 = (gcnew System::Windows::Forms::Button());
			this->B8 = (gcnew System::Windows::Forms::Button());
			this->B9 = (gcnew System::Windows::Forms::Button());
			this->B0 = (gcnew System::Windows::Forms::Button());
			this->B11 = (gcnew System::Windows::Forms::Button());
			this->Mul = (gcnew System::Windows::Forms::Button());
			this->Min = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Eq = (gcnew System::Windows::Forms::Button());
			this->Div = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->Root = (gcnew System::Windows::Forms::Button());
			this->Mod = (gcnew System::Windows::Forms::Button());
			this->InputA = (gcnew System::Windows::Forms::TextBox());
			this->InputB = (gcnew System::Windows::Forms::TextBox());
			this->Res = (gcnew System::Windows::Forms::TextBox());
			this->Sign = (gcnew System::Windows::Forms::Label());
			this->Op = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->FocusA = (gcnew System::Windows::Forms::Button());
			this->FocusB = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(54, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 19);
			this->label2->TabIndex = 53;
			this->label2->Text = L"CREATED BY: ROLAND Z. REGIO";
			// 
			// FromIntro
			// 
			this->FromIntro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FromIntro->AutoSize = true;
			this->FromIntro->BackColor = System::Drawing::Color::Transparent;
			this->FromIntro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FromIntro->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FromIntro->ForeColor = System::Drawing::SystemColors::Desktop;
			this->FromIntro->Location = System::Drawing::Point(54, 65);
			this->FromIntro->Name = L"FromIntro";
			this->FromIntro->Size = System::Drawing::Size(233, 19);
			this->FromIntro->TabIndex = 52;
			this->FromIntro->Text = L"From: PUPSTB as BSIT 1-1";
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Castellar", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(100, 103);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(930, 41);
			this->TitleBar->TabIndex = 56;
			this->TitleBar->Text = L"SIMPLE CALCULATOR PROGRAM";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// B1
			// 
			this->B1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1->ForeColor = System::Drawing::Color::White;
			this->B1->Location = System::Drawing::Point(357, 316);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(85, 35);
			this->B1->TabIndex = 57;
			this->B1->Text = L"1";
			this->B1->UseVisualStyleBackColor = false;
			this->B1->Click += gcnew System::EventHandler(this, &SCalc::B1_Click);
			// 
			// B2
			// 
			this->B2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2->ForeColor = System::Drawing::Color::White;
			this->B2->Location = System::Drawing::Point(448, 316);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(85, 35);
			this->B2->TabIndex = 58;
			this->B2->Text = L"2";
			this->B2->UseVisualStyleBackColor = false;
			this->B2->Click += gcnew System::EventHandler(this, &SCalc::B2_Click);
			// 
			// B3
			// 
			this->B3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B3->ForeColor = System::Drawing::Color::White;
			this->B3->Location = System::Drawing::Point(539, 316);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(85, 35);
			this->B3->TabIndex = 59;
			this->B3->Text = L"3";
			this->B3->UseVisualStyleBackColor = false;
			this->B3->Click += gcnew System::EventHandler(this, &SCalc::B3_Click);
			// 
			// B4
			// 
			this->B4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B4->ForeColor = System::Drawing::Color::White;
			this->B4->Location = System::Drawing::Point(357, 357);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(85, 35);
			this->B4->TabIndex = 60;
			this->B4->Text = L"4";
			this->B4->UseVisualStyleBackColor = false;
			this->B4->Click += gcnew System::EventHandler(this, &SCalc::B4_Click);
			// 
			// B5
			// 
			this->B5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B5->ForeColor = System::Drawing::Color::White;
			this->B5->Location = System::Drawing::Point(448, 357);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(85, 35);
			this->B5->TabIndex = 61;
			this->B5->Text = L"5";
			this->B5->UseVisualStyleBackColor = false;
			this->B5->Click += gcnew System::EventHandler(this, &SCalc::B5_Click);
			// 
			// B6
			// 
			this->B6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B6->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B6->ForeColor = System::Drawing::Color::White;
			this->B6->Location = System::Drawing::Point(539, 357);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(85, 35);
			this->B6->TabIndex = 62;
			this->B6->Text = L"6";
			this->B6->UseVisualStyleBackColor = false;
			this->B6->Click += gcnew System::EventHandler(this, &SCalc::B6_Click);
			// 
			// B7
			// 
			this->B7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B7->ForeColor = System::Drawing::Color::White;
			this->B7->Location = System::Drawing::Point(357, 398);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(85, 35);
			this->B7->TabIndex = 63;
			this->B7->Text = L"7";
			this->B7->UseVisualStyleBackColor = false;
			this->B7->Click += gcnew System::EventHandler(this, &SCalc::B7_Click);
			// 
			// B8
			// 
			this->B8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B8->ForeColor = System::Drawing::Color::White;
			this->B8->Location = System::Drawing::Point(448, 398);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(85, 35);
			this->B8->TabIndex = 64;
			this->B8->Text = L"8";
			this->B8->UseVisualStyleBackColor = false;
			this->B8->Click += gcnew System::EventHandler(this, &SCalc::B8_Click);
			// 
			// B9
			// 
			this->B9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B9->ForeColor = System::Drawing::Color::White;
			this->B9->Location = System::Drawing::Point(539, 398);
			this->B9->Name = L"B9";
			this->B9->Size = System::Drawing::Size(85, 35);
			this->B9->TabIndex = 65;
			this->B9->Text = L"9";
			this->B9->UseVisualStyleBackColor = false;
			this->B9->Click += gcnew System::EventHandler(this, &SCalc::B9_Click);
			// 
			// B0
			// 
			this->B0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B0->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B0->ForeColor = System::Drawing::Color::White;
			this->B0->Location = System::Drawing::Point(357, 439);
			this->B0->Name = L"B0";
			this->B0->Size = System::Drawing::Size(176, 35);
			this->B0->TabIndex = 66;
			this->B0->Text = L"0";
			this->B0->UseVisualStyleBackColor = false;
			this->B0->Click += gcnew System::EventHandler(this, &SCalc::B0_Click);
			// 
			// B11
			// 
			this->B11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->B11->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B11->ForeColor = System::Drawing::Color::White;
			this->B11->Location = System::Drawing::Point(539, 439);
			this->B11->Name = L"B11";
			this->B11->Size = System::Drawing::Size(85, 35);
			this->B11->TabIndex = 67;
			this->B11->Text = L".";
			this->B11->UseVisualStyleBackColor = false;
			this->B11->Click += gcnew System::EventHandler(this, &SCalc::B11_Click);
			// 
			// Mul
			// 
			this->Mul->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Mul->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Mul->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mul->ForeColor = System::Drawing::Color::White;
			this->Mul->Location = System::Drawing::Point(630, 316);
			this->Mul->Name = L"Mul";
			this->Mul->Size = System::Drawing::Size(85, 35);
			this->Mul->TabIndex = 68;
			this->Mul->Text = L"x";
			this->Mul->UseVisualStyleBackColor = false;
			this->Mul->Click += gcnew System::EventHandler(this, &SCalc::Mul_Click);
			// 
			// Min
			// 
			this->Min->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Min->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Min->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Min->ForeColor = System::Drawing::Color::White;
			this->Min->Location = System::Drawing::Point(630, 357);
			this->Min->Name = L"Min";
			this->Min->Size = System::Drawing::Size(85, 35);
			this->Min->TabIndex = 69;
			this->Min->Text = L"-";
			this->Min->UseVisualStyleBackColor = false;
			this->Min->Click += gcnew System::EventHandler(this, &SCalc::Min_Click);
			// 
			// Add
			// 
			this->Add->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Add->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->ForeColor = System::Drawing::Color::White;
			this->Add->Location = System::Drawing::Point(630, 398);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(85, 35);
			this->Add->TabIndex = 70;
			this->Add->Text = L"+";
			this->Add->UseVisualStyleBackColor = false;
			this->Add->Click += gcnew System::EventHandler(this, &SCalc::Add_Click);
			// 
			// Eq
			// 
			this->Eq->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Eq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Eq->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eq->ForeColor = System::Drawing::Color::White;
			this->Eq->Location = System::Drawing::Point(630, 439);
			this->Eq->Name = L"Eq";
			this->Eq->Size = System::Drawing::Size(85, 35);
			this->Eq->TabIndex = 71;
			this->Eq->Text = L"=";
			this->Eq->UseVisualStyleBackColor = false;
			this->Eq->Click += gcnew System::EventHandler(this, &SCalc::Eq_Click);
			// 
			// Div
			// 
			this->Div->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Div->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Div->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Div->ForeColor = System::Drawing::Color::White;
			this->Div->Location = System::Drawing::Point(630, 275);
			this->Div->Name = L"Div";
			this->Div->Size = System::Drawing::Size(85, 35);
			this->Div->TabIndex = 72;
			this->Div->Text = L"/";
			this->Div->UseVisualStyleBackColor = false;
			this->Div->Click += gcnew System::EventHandler(this, &SCalc::Div_Click);
			// 
			// del
			// 
			this->del->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->del->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del->ForeColor = System::Drawing::Color::White;
			this->del->Location = System::Drawing::Point(357, 275);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(85, 35);
			this->del->TabIndex = 73;
			this->del->Text = L"CE";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &SCalc::del_Click);
			// 
			// Root
			// 
			this->Root->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Root->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Root->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Root->ForeColor = System::Drawing::Color::White;
			this->Root->Location = System::Drawing::Point(448, 275);
			this->Root->Name = L"Root";
			this->Root->Size = System::Drawing::Size(85, 35);
			this->Root->TabIndex = 74;
			this->Root->Text = L"√";
			this->Root->UseVisualStyleBackColor = false;
			this->Root->Click += gcnew System::EventHandler(this, &SCalc::Root_Click);
			// 
			// Mod
			// 
			this->Mod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Mod->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mod->ForeColor = System::Drawing::Color::White;
			this->Mod->Location = System::Drawing::Point(539, 275);
			this->Mod->Name = L"Mod";
			this->Mod->Size = System::Drawing::Size(85, 35);
			this->Mod->TabIndex = 75;
			this->Mod->Text = L"%";
			this->Mod->UseVisualStyleBackColor = false;
			this->Mod->Click += gcnew System::EventHandler(this, &SCalc::Mod_Click);
			// 
			// InputA
			// 
			this->InputA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputA->BackColor = System::Drawing::Color::WhiteSmoke;
			this->InputA->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputA->Location = System::Drawing::Point(58, 147);
			this->InputA->Multiline = true;
			this->InputA->Name = L"InputA";
			this->InputA->Size = System::Drawing::Size(459, 41);
			this->InputA->TabIndex = 76;
			this->InputA->TextChanged += gcnew System::EventHandler(this, &SCalc::InputA_TextChanged);
			// 
			// InputB
			// 
			this->InputB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputB->BackColor = System::Drawing::Color::WhiteSmoke;
			this->InputB->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputB->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->InputB->Location = System::Drawing::Point(58, 227);
			this->InputB->Multiline = true;
			this->InputB->Name = L"InputB";
			this->InputB->Size = System::Drawing::Size(459, 42);
			this->InputB->TabIndex = 77;
			this->InputB->TextChanged += gcnew System::EventHandler(this, &SCalc::InputB_TextChanged);
			// 
			// Res
			// 
			this->Res->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Res->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Res->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Res->Location = System::Drawing::Point(571, 176);
			this->Res->Multiline = true;
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(459, 58);
			this->Res->TabIndex = 78;
			this->Res->TextChanged += gcnew System::EventHandler(this, &SCalc::Res_TextChanged_1);
			// 
			// Sign
			// 
			this->Sign->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Sign->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sign->Location = System::Drawing::Point(523, 185);
			this->Sign->Name = L"Sign";
			this->Sign->Size = System::Drawing::Size(42, 49);
			this->Sign->TabIndex = 79;
			this->Sign->Text = L"=";
			this->Sign->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Op
			// 
			this->Op->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Op->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Op->Location = System::Drawing::Point(256, 192);
			this->Op->Name = L"Op";
			this->Op->Size = System::Drawing::Size(55, 33);
			this->Op->TabIndex = 80;
			this->Op->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 58);
			this->label1->TabIndex = 81;
			this->label1->Text = L"A";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 58);
			this->label3->TabIndex = 82;
			this->label3->Text = L"B";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FocusA
			// 
			this->FocusA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FocusA->BackColor = System::Drawing::Color::Transparent;
			this->FocusA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->FocusA->FlatAppearance->BorderSize = 0;
			this->FocusA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FocusA->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->FocusA->ForeColor = System::Drawing::Color::DarkGreen;
			this->FocusA->Location = System::Drawing::Point(523, 147);
			this->FocusA->Name = L"FocusA";
			this->FocusA->Size = System::Drawing::Size(23, 35);
			this->FocusA->TabIndex = 83;
			this->FocusA->Text = L"";
			this->FocusA->UseVisualStyleBackColor = false;
			this->FocusA->Click += gcnew System::EventHandler(this, &SCalc::FocusA_Click);
			// 
			// FocusB
			// 
			this->FocusB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FocusB->BackColor = System::Drawing::Color::Transparent;
			this->FocusB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->FocusB->FlatAppearance->BorderSize = 0;
			this->FocusB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FocusB->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->FocusB->ForeColor = System::Drawing::Color::Gainsboro;
			this->FocusB->Location = System::Drawing::Point(523, 237);
			this->FocusB->Name = L"FocusB";
			this->FocusB->Size = System::Drawing::Size(23, 35);
			this->FocusB->TabIndex = 84;
			this->FocusB->Text = L"";
			this->FocusB->UseVisualStyleBackColor = false;
			this->FocusB->Click += gcnew System::EventHandler(this, &SCalc::FocusB_Click);
			// 
			// SCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(1059, 515);
			this->Controls->Add(this->FocusB);
			this->Controls->Add(this->FocusA);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Op);
			this->Controls->Add(this->Sign);
			this->Controls->Add(this->Res);
			this->Controls->Add(this->InputB);
			this->Controls->Add(this->InputA);
			this->Controls->Add(this->Mod);
			this->Controls->Add(this->Root);
			this->Controls->Add(this->del);
			this->Controls->Add(this->Div);
			this->Controls->Add(this->Eq);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->Min);
			this->Controls->Add(this->Mul);
			this->Controls->Add(this->B11);
			this->Controls->Add(this->B0);
			this->Controls->Add(this->B9);
			this->Controls->Add(this->B8);
			this->Controls->Add(this->B7);
			this->Controls->Add(this->B6);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FromIntro);
			this->Controls->Add(this->TitleBar);
			this->MinimumSize = System::Drawing::Size(1075, 550);
			this->Name = L"SCalc";
			this->Text = L"SCalc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void B1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(InputA->ReadOnly == false)
			InputA->Text += "1";
		if (InputA->ReadOnly == true)
			InputB->Text += "1";
	}
	private: System::Void B2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "2";
		if (InputA->ReadOnly == true)
			InputB->Text += "2";
	}
	private: System::Void B3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "3";
		if (InputA->ReadOnly == true)
			InputB->Text += "3";
	}
	private: System::Void B4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "4";
		if (InputA->ReadOnly == true)
			InputB->Text += "4";
	}
	private: System::Void B5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "5";
		if (InputA->ReadOnly == true)
			InputB->Text += "5";
	}
	private: System::Void B6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "6";
		if (InputA->ReadOnly == true)
			InputB->Text += "6";
	}
	private: System::Void B7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "7";
		if (InputA->ReadOnly == true)
			InputB->Text += "7";
	}
	private: System::Void B8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "8";
		if (InputA->ReadOnly == true)
			InputB->Text += "8";
	}
	private: System::Void B9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "9";
		if (InputA->ReadOnly == true)
			InputB->Text += "9";
	}
	private: System::Void B0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += "0";
		if (InputA->ReadOnly == true)
			InputB->Text += "0";
	}
	private: System::Void B11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA->ReadOnly == false)
			InputA->Text += ".";
		if (InputA->ReadOnly == true)
			InputB->Text += ".";
	}
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 1;
		if (InputA->Text == "" || InputB->Text == "")
			MessageBox::Show("Enter the values for A & B");
		else
		{
			a = double::Parse(InputA->Text);
			b = double::Parse(InputB->Text);
			ans = a + b;
			Op->Text = "+";
		}
	}
	private: System::Void Min_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 2;
		if (InputA->Text == "" || InputB->Text == "")
			MessageBox::Show("Enter the values for A & B");
		else
		{ 
			a = float::Parse(InputA->Text);
			b = float::Parse(InputB->Text);
			Op->Text = "-";
		}
	}
	private: System::Void Mul_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 3;
		if (InputA->Text == "" || InputB->Text == "")
			MessageBox::Show("Enter the values for A & B");
		else
		{
			a = double::Parse(InputA->Text);
			b = double::Parse(InputB->Text);
			Op->Text = "x";
		}
	}
	private: System::Void Div_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 4;
		if (InputA->Text == "" || InputB->Text == "")
			MessageBox::Show("Enter the values for A & B");
		else
		{
			a = double::Parse(InputA->Text);
			b = double::Parse(InputB->Text);
			Op->Text = "/";
		}
	}
	private: System::Void Mod_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 5;
		if (InputA->Text == "" || InputB->Text == "")
			MessageBox::Show("Enter the values for A & B");
		else
		{
			a = double::Parse(InputA->Text);
			b = double::Parse(InputB->Text);
			Op->Text = "%";
		}
	}
	private: System::Void Root_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 6;
		if (InputB->Text != "")
			MessageBox::Show("Only one input is needed(Preferably input A)");
		else
		{
			a = double::Parse(InputA->Text);
			Op->Text = "Sqrt";
		}
	}
	private: System::Void Eq_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((InputA->Text == "" || InputB->Text == "") && Op->Text != "Sqrt")
			MessageBox::Show("Enter the values for A & B");
		if (Op->Text == "")
		{
			MessageBox::Show("Choose an Operand");
		}
		if (flag == 1)
		{
			ans = a + b;
			Res->Text = Convert::ToString(ans);
		}
		else if (flag == 2)
		{
			ans = a - b;
			Res->Text = Convert::ToString(ans);
		}
		else if (flag == 3)
		{
			ans = a * b;
			Res->Text = Convert::ToString(ans);
		}
		else if (flag == 4)
		{
			if (a == 0)
			{
				MessageBox::Show("Divided By Zero Error");
			}
			ans = a / b;
			Res->Text = Convert::ToString(ans);
		}
		else if (flag == 5)
		{
			ans = fmod(a, b);
			Res->Text = Convert::ToString(ans);
		}
		else if (flag == 6)
		{
			ans = sqrt(a);
			Res->Text = Convert::ToString(ans);
		}
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
		Res->Text = "";
		InputA->Text = "";
		InputB->Text = "";
		Op->Text = "";
	}
	private: System::Void Res_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		int temp;
		if (Int32::TryParse(Res->Text, temp))
			a = float::Parse(Res->Text);
	}
	private: System::Void FocusA_Click(System::Object^ sender, System::EventArgs^ e) {
		InputA->ReadOnly = false;
		FocusA->ForeColor = ForeColor.DarkGreen;
		FocusB->ForeColor = ForeColor.Gainsboro;
	}
	private: System::Void FocusB_Click(System::Object ^ sender, System::EventArgs ^ e) {
		InputA->ReadOnly = true;
		FocusB->ForeColor = ForeColor.DarkGreen;
		FocusA->ForeColor = ForeColor.Gainsboro;
	}
	private: System::Void InputA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InputB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
