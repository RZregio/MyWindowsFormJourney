#pragma once
#include<conio.h>
#include<math.h>  
double ans, a, b, fctr;
int flag = 0, i;
using namespace std;
namespace CalC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SC
	/// </summary>
	public ref class SC : public System::Windows::Forms::Form
	{
	public:
		Form ^home;
		SC(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SC(Form ^scalc)
		{
			home = scalc;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SC()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Op;
	private: System::Windows::Forms::TextBox^ Res;
	private: System::Windows::Forms::TextBox^ InputB;
	private: System::Windows::Forms::TextBox^ InputA;
	private: System::Windows::Forms::Button^ Mod;
	private: System::Windows::Forms::Button^ Root;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ Div;
	private: System::Windows::Forms::Button^ Eq;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ Min;
	private: System::Windows::Forms::Button^ Mul;
	private: System::Windows::Forms::Button^ HB;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::Button^ fact;
	private: System::Windows::Forms::Button^ pow;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ SCHelp;




	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SC::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Op = (gcnew System::Windows::Forms::Label());
			this->Res = (gcnew System::Windows::Forms::TextBox());
			this->InputB = (gcnew System::Windows::Forms::TextBox());
			this->InputA = (gcnew System::Windows::Forms::TextBox());
			this->Mod = (gcnew System::Windows::Forms::Button());
			this->Root = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->Div = (gcnew System::Windows::Forms::Button());
			this->Eq = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Min = (gcnew System::Windows::Forms::Button());
			this->Mul = (gcnew System::Windows::Forms::Button());
			this->HB = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->fact = (gcnew System::Windows::Forms::Button());
			this->pow = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SCHelp = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(57, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 58);
			this->label3->TabIndex = 98;
			this->label3->Text = L"B";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 58);
			this->label1->TabIndex = 97;
			this->label1->Text = L"A";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Op
			// 
			this->Op->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Op->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Op->Location = System::Drawing::Point(303, 214);
			this->Op->Name = L"Op";
			this->Op->Size = System::Drawing::Size(55, 33);
			this->Op->TabIndex = 96;
			this->Op->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Op->Click += gcnew System::EventHandler(this, &SC::Op_Click);
			// 
			// Res
			// 
			this->Res->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Res->BackColor = System::Drawing::Color::Silver;
			this->Res->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Res->Location = System::Drawing::Point(99, 357);
			this->Res->Multiline = true;
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(374, 158);
			this->Res->TabIndex = 95;
			this->Res->TextChanged += gcnew System::EventHandler(this, &SC::Res_TextChanged);
			// 
			// InputB
			// 
			this->InputB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputB->BackColor = System::Drawing::Color::Silver;
			this->InputB->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputB->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->InputB->Location = System::Drawing::Point(105, 249);
			this->InputB->Multiline = true;
			this->InputB->Name = L"InputB";
			this->InputB->Size = System::Drawing::Size(459, 42);
			this->InputB->TabIndex = 94;
			this->InputB->TextChanged += gcnew System::EventHandler(this, &SC::InputB_TextChanged_1);
			// 
			// InputA
			// 
			this->InputA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputA->BackColor = System::Drawing::Color::Silver;
			this->InputA->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputA->Location = System::Drawing::Point(105, 169);
			this->InputA->Multiline = true;
			this->InputA->Name = L"InputA";
			this->InputA->Size = System::Drawing::Size(459, 41);
			this->InputA->TabIndex = 93;
			this->InputA->TextChanged += gcnew System::EventHandler(this, &SC::InputA_TextChanged_1);
			// 
			// Mod
			// 
			this->Mod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Mod->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mod->ForeColor = System::Drawing::Color::White;
			this->Mod->Location = System::Drawing::Point(327, 316);
			this->Mod->Name = L"Mod";
			this->Mod->Size = System::Drawing::Size(70, 35);
			this->Mod->TabIndex = 92;
			this->Mod->Text = L"%";
			this->Mod->UseVisualStyleBackColor = false;
			this->Mod->Click += gcnew System::EventHandler(this, &SC::Mod_Click_1);
			// 
			// Root
			// 
			this->Root->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Root->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Root->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Root->ForeColor = System::Drawing::Color::White;
			this->Root->Location = System::Drawing::Point(251, 316);
			this->Root->Name = L"Root";
			this->Root->Size = System::Drawing::Size(70, 35);
			this->Root->TabIndex = 91;
			this->Root->Text = L"√";
			this->Root->UseVisualStyleBackColor = false;
			this->Root->Click += gcnew System::EventHandler(this, &SC::Root_Click_1);
			// 
			// del
			// 
			this->del->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->del->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del->ForeColor = System::Drawing::Color::White;
			this->del->Location = System::Drawing::Point(99, 316);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(70, 35);
			this->del->TabIndex = 90;
			this->del->Text = L"CE";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &SC::del_Click_1);
			// 
			// Div
			// 
			this->Div->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Div->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Div->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Div->ForeColor = System::Drawing::Color::White;
			this->Div->Location = System::Drawing::Point(479, 316);
			this->Div->Name = L"Div";
			this->Div->Size = System::Drawing::Size(85, 35);
			this->Div->TabIndex = 89;
			this->Div->Text = L"/";
			this->Div->UseVisualStyleBackColor = false;
			this->Div->Click += gcnew System::EventHandler(this, &SC::Div_Click_1);
			// 
			// Eq
			// 
			this->Eq->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Eq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Eq->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eq->ForeColor = System::Drawing::Color::White;
			this->Eq->Location = System::Drawing::Point(479, 480);
			this->Eq->Name = L"Eq";
			this->Eq->Size = System::Drawing::Size(85, 35);
			this->Eq->TabIndex = 88;
			this->Eq->Text = L"=";
			this->Eq->UseVisualStyleBackColor = false;
			this->Eq->Click += gcnew System::EventHandler(this, &SC::Eq_Click_1);
			// 
			// Add
			// 
			this->Add->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Add->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->ForeColor = System::Drawing::Color::White;
			this->Add->Location = System::Drawing::Point(479, 439);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(85, 35);
			this->Add->TabIndex = 87;
			this->Add->Text = L"+";
			this->Add->UseVisualStyleBackColor = false;
			this->Add->Click += gcnew System::EventHandler(this, &SC::Add_Click_1);
			// 
			// Min
			// 
			this->Min->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Min->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Min->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Min->ForeColor = System::Drawing::Color::White;
			this->Min->Location = System::Drawing::Point(479, 398);
			this->Min->Name = L"Min";
			this->Min->Size = System::Drawing::Size(85, 35);
			this->Min->TabIndex = 86;
			this->Min->Text = L"-";
			this->Min->UseVisualStyleBackColor = false;
			this->Min->Click += gcnew System::EventHandler(this, &SC::Min_Click_1);
			// 
			// Mul
			// 
			this->Mul->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Mul->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Mul->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mul->ForeColor = System::Drawing::Color::White;
			this->Mul->Location = System::Drawing::Point(479, 357);
			this->Mul->Name = L"Mul";
			this->Mul->Size = System::Drawing::Size(85, 35);
			this->Mul->TabIndex = 85;
			this->Mul->Text = L"x";
			this->Mul->UseVisualStyleBackColor = false;
			this->Mul->Click += gcnew System::EventHandler(this, &SC::Mul_Click_1);
			// 
			// HB
			// 
			this->HB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->HB->BackColor = System::Drawing::Color::Transparent;
			this->HB->FlatAppearance->BorderSize = 0;
			this->HB->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->HB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->HB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HB->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HB->ForeColor = System::Drawing::Color::White;
			this->HB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HB.Image")));
			this->HB->Location = System::Drawing::Point(58, 11);
			this->HB->Name = L"HB";
			this->HB->Size = System::Drawing::Size(45, 35);
			this->HB->TabIndex = 101;
			this->HB->UseVisualStyleBackColor = false;
			this->HB->Click += gcnew System::EventHandler(this, &SC::HB_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(626, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 37);
			this->button1->TabIndex = 102;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SC::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(586, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 35);
			this->button2->TabIndex = 103;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->Location = System::Drawing::Point(542, 11);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 32);
			this->button3->TabIndex = 104;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SC::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->TitleBar);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->HB);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 61);
			this->panel1->TabIndex = 105;
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(209, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(246, 51);
			this->TitleBar->TabIndex = 107;
			this->TitleBar->Text = L"CMATHings ™";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(7, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 41);
			this->button4->TabIndex = 106;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SC::button4_Click);
			// 
			// fact
			// 
			this->fact->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->fact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->fact->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fact->ForeColor = System::Drawing::Color::White;
			this->fact->Location = System::Drawing::Point(175, 316);
			this->fact->Name = L"fact";
			this->fact->Size = System::Drawing::Size(70, 35);
			this->fact->TabIndex = 106;
			this->fact->Text = L"!";
			this->fact->UseVisualStyleBackColor = false;
			this->fact->Click += gcnew System::EventHandler(this, &SC::fact_Click);
			// 
			// pow
			// 
			this->pow->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pow->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pow->ForeColor = System::Drawing::Color::White;
			this->pow->Location = System::Drawing::Point(403, 316);
			this->pow->Name = L"pow";
			this->pow->Size = System::Drawing::Size(70, 35);
			this->pow->TabIndex = 107;
			this->pow->Text = L"a^b";
			this->pow->UseVisualStyleBackColor = false;
			this->pow->Click += gcnew System::EventHandler(this, &SC::pow_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(147, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(371, 51);
			this->label2->TabIndex = 127;
			this->label2->Text = L"Simple Calculator";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &SC::label2_Click);
			// 
			// SCHelp
			// 
			this->SCHelp->BackColor = System::Drawing::Color::Transparent;
			this->SCHelp->FlatAppearance->BorderSize = 0;
			this->SCHelp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SCHelp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->SCHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SCHelp->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SCHelp->Location = System::Drawing::Point(615, 67);
			this->SCHelp->Name = L"SCHelp";
			this->SCHelp->Size = System::Drawing::Size(39, 47);
			this->SCHelp->TabIndex = 163;
			this->SCHelp->Text = L"\?";
			this->SCHelp->UseVisualStyleBackColor = false;
			this->SCHelp->Click += gcnew System::EventHandler(this, &SC::SCHelp_Click);
			// 
			// SC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(666, 550);
			this->Controls->Add(this->SCHelp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pow);
			this->Controls->Add(this->fact);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Op);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(666, 550);
			this->MinimumSize = System::Drawing::Size(666, 550);
			this->Name = L"SC";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SC";
			this->Load += gcnew System::EventHandler(this, &SC::SC_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		home->Show();
	}
	private: System::Void InputA_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InputB_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Op_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void del_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Res->Clear();
		InputA->Clear();
		InputB->Clear();
		Op->Text = "";
	}
	private: System::Void pow_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 8;
		if (InputA->Text == "" || InputB->Text == "")
			MessageBox::Show("Enter the base for A & exponent for B");

		else
		{
			a = double::Parse(InputA->Text);
			b = double::Parse(InputB->Text);
			Op->Text = "a^b";
		}
	}
	private: System::Void fact_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 7;
		if (InputB->Text != "")
			MessageBox::Show("Only one input is needed(Preferably input A)");
		Res->Text = "";
		InputB->Text = "";
		if (InputA->Text == "" && InputB->Text == "")
			MessageBox::Show("Enter a value(Preferably input A)");
		else
		{
			a = double::Parse(InputA->Text);
			Op->Text = "!";
		}
	}
	private: System::Void Root_Click_1(System::Object^ sender, System::EventArgs^ e) {
		flag = 6;
		if (InputB->Text != "")
			MessageBox::Show("Only one input is needed(Preferably input A)");
			Res->Text = "";
			InputB->Text = "";
		if (InputA->Text == "" && InputB->Text == "")
			MessageBox::Show("Enter a value(Preferably input A)");
		else
		{
			a = double::Parse(InputA->Text);
			Op->Text = "Sqrt";
		}
	}
	private: System::Void Mod_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void Div_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void Mul_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void Min_Click_1(System::Object^ sender, System::EventArgs^ e) {
		flag = 2;
		if (InputA->Text == "" || InputB->Text == "")
			MessageBox::Show("Enter the values for A & B");
		else
		{
			a = double::Parse(InputA->Text);
			b = double::Parse(InputB->Text);
			Op->Text = "-";
		}
	}
	private: System::Void Add_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void Eq_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if ((InputA->Text == "" || InputB->Text == "") && Op->Text != "Sqrt" && Op->Text != "!")
			MessageBox::Show("Enter the values for A & B");
			Res->Text = "";
		if (Op->Text == "")
		{
			MessageBox::Show("Choose an Operand");
			Res->Text = "";
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
		else if (flag == 7)
		{
			fctr = 1;
			for (i = 1; i <= a; i++)
			{
				fctr *= i;
			}
			Res->Text = Convert::ToString(fctr);
			if (a < 0 || a > 175)
			{
				MessageBox::Show("The entered value should be a positive numerical length[Max is 175].");
			}
		}
		else if (flag == 8)
		{
			ans = powf(a, b);
			Res->Text = Convert::ToString(ans);
		}

	}
	private: System::Void Res_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SC_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		home->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void SCHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("1. Enter the Required Values\n2. Choose an Operand\n3. Click Equal Sign for the output\n4. Repeat");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("There is no formulaic table to show");
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}