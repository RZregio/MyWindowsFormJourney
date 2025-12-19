#pragma once
#include<conio.h>
#include<math.h>  
#define PI 3.141592653589793238
double ans1, a1;
int flag1 = 0;
using namespace std;
namespace CalC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Trigo
	/// </summary>
	public ref class Trigo : public System::Windows::Forms::Form
	{
	public:
		Form^ home;
		Trigo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Trigo(Form^ trigo)
		{
			home = trigo;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Trigo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ HB1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Res1;
	private: System::Windows::Forms::TextBox^ InputA1;




	private: System::Windows::Forms::Button^ del1;
	private: System::Windows::Forms::Button^ Eq1;
	private: System::Windows::Forms::ComboBox^ TrigoChoices;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Select;
	private: System::Windows::Forms::Button^ TrigoHelp;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Trigo::typeid));
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->HB1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Res1 = (gcnew System::Windows::Forms::TextBox());
			this->InputA1 = (gcnew System::Windows::Forms::TextBox());
			this->del1 = (gcnew System::Windows::Forms::Button());
			this->Eq1 = (gcnew System::Windows::Forms::Button());
			this->TrigoChoices = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Select = (gcnew System::Windows::Forms::Label());
			this->TrigoHelp = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(279, 0);
			this->TitleBar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(328, 63);
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
			this->button4->Location = System::Drawing::Point(9, 12);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 50);
			this->button4->TabIndex = 106;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Trigo::button4_Click);
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
			this->panel1->Controls->Add(this->HB1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(886, 75);
			this->panel1->TabIndex = 122;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Trigo::panel1_Paint);
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
			this->button2->Location = System::Drawing::Point(781, 12);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 43);
			this->button2->TabIndex = 103;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// HB1
			// 
			this->HB1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->HB1->BackColor = System::Drawing::Color::Transparent;
			this->HB1->FlatAppearance->BorderSize = 0;
			this->HB1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->HB1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->HB1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HB1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HB1->ForeColor = System::Drawing::Color::White;
			this->HB1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HB1.Image")));
			this->HB1->Location = System::Drawing::Point(77, 14);
			this->HB1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->HB1->Name = L"HB1";
			this->HB1->Size = System::Drawing::Size(60, 43);
			this->HB1->TabIndex = 101;
			this->HB1->UseVisualStyleBackColor = false;
			this->HB1->Click += gcnew System::EventHandler(this, &Trigo::HB1_Click);
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
			this->button3->Location = System::Drawing::Point(723, 14);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 39);
			this->button3->TabIndex = 104;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Trigo::button3_Click);
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
			this->button1->Location = System::Drawing::Point(835, 11);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 46);
			this->button1->TabIndex = 102;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Trigo::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 218);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 71);
			this->label1->TabIndex = 120;
			this->label1->Text = L"A";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Res1
			// 
			this->Res1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Res1->BackColor = System::Drawing::Color::Silver;
			this->Res1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Res1->Location = System::Drawing::Point(143, 364);
			this->Res1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Res1->Multiline = true;
			this->Res1->Name = L"Res1";
			this->Res1->Size = System::Drawing::Size(497, 194);
			this->Res1->TabIndex = 118;
			this->Res1->TextChanged += gcnew System::EventHandler(this, &Trigo::Res1_TextChanged);
			// 
			// InputA1
			// 
			this->InputA1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputA1->BackColor = System::Drawing::Color::Silver;
			this->InputA1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputA1->Location = System::Drawing::Point(151, 226);
			this->InputA1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->InputA1->Multiline = true;
			this->InputA1->Name = L"InputA1";
			this->InputA1->Size = System::Drawing::Size(611, 50);
			this->InputA1->TabIndex = 116;
			this->InputA1->TextChanged += gcnew System::EventHandler(this, &Trigo::InputA1_TextChanged);
			// 
			// del1
			// 
			this->del1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->del1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->del1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del1->ForeColor = System::Drawing::Color::White;
			this->del1->Location = System::Drawing::Point(649, 364);
			this->del1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->del1->Name = L"del1";
			this->del1->Size = System::Drawing::Size(113, 90);
			this->del1->TabIndex = 113;
			this->del1->Text = L"CE";
			this->del1->UseVisualStyleBackColor = false;
			this->del1->Click += gcnew System::EventHandler(this, &Trigo::del1_Click);
			// 
			// Eq1
			// 
			this->Eq1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Eq1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Eq1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eq1->ForeColor = System::Drawing::Color::White;
			this->Eq1->Location = System::Drawing::Point(649, 462);
			this->Eq1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Eq1->Name = L"Eq1";
			this->Eq1->Size = System::Drawing::Size(113, 97);
			this->Eq1->TabIndex = 111;
			this->Eq1->Text = L"=";
			this->Eq1->UseVisualStyleBackColor = false;
			this->Eq1->Click += gcnew System::EventHandler(this, &Trigo::Eq1_Click);
			// 
			// TrigoChoices
			// 
			this->TrigoChoices->AllowDrop = true;
			this->TrigoChoices->BackColor = System::Drawing::Color::Silver;
			this->TrigoChoices->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrigoChoices->FormattingEnabled = true;
			this->TrigoChoices->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"FIND SINE", L"FIND COSINE", L"FIND TANGENT",
					L"FIND COTANGENT", L"FIND COSECANT", L"FIND SECANT"
			});
			this->TrigoChoices->Location = System::Drawing::Point(408, 298);
			this->TrigoChoices->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TrigoChoices->Name = L"TrigoChoices";
			this->TrigoChoices->Size = System::Drawing::Size(276, 31);
			this->TrigoChoices->TabIndex = 125;
			this->TrigoChoices->SelectedIndexChanged += gcnew System::EventHandler(this, &Trigo::TrigoChoices_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(191, 103);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(495, 63);
			this->label2->TabIndex = 126;
			this->label2->Text = L"Trigonometric Function Solver";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Trigo::label2_Click);
			// 
			// Select
			// 
			this->Select->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Select->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select->Location = System::Drawing::Point(151, 284);
			this->Select->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Select->Name = L"Select";
			this->Select->Size = System::Drawing::Size(249, 58);
			this->Select->TabIndex = 161;
			this->Select->Text = L"Select a Trigonometric Function:";
			this->Select->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TrigoHelp
			// 
			this->TrigoHelp->BackColor = System::Drawing::Color::Transparent;
			this->TrigoHelp->FlatAppearance->BorderSize = 0;
			this->TrigoHelp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->TrigoHelp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->TrigoHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TrigoHelp->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrigoHelp->Location = System::Drawing::Point(820, 82);
			this->TrigoHelp->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TrigoHelp->Name = L"TrigoHelp";
			this->TrigoHelp->Size = System::Drawing::Size(52, 58);
			this->TrigoHelp->TabIndex = 162;
			this->TrigoHelp->Text = L"\?";
			this->TrigoHelp->UseVisualStyleBackColor = false;
			this->TrigoHelp->Click += gcnew System::EventHandler(this, &Trigo::TrigoHelp_Click);
			// 
			// Trigo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(888, 677);
			this->Controls->Add(this->TrigoHelp);
			this->Controls->Add(this->Select);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TrigoChoices);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Res1);
			this->Controls->Add(this->InputA1);
			this->Controls->Add(this->del1);
			this->Controls->Add(this->Eq1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(888, 677);
			this->MinimumSize = System::Drawing::Size(888, 677);
			this->Name = L"Trigo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trigo";
			this->Load += gcnew System::EventHandler(this, &Trigo::Trigo_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TrigoChoices_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TrigoChoices->SelectedItem->ToString() == "FIND SINE")
		{
			if (InputA1->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag1 = 1;
				a1 = double::Parse(InputA1->Text);
			}
		}
		if (TrigoChoices->SelectedItem->ToString() == "FIND COSINE")
		{
			if (InputA1->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag1 = 2;
				a1 = double::Parse(InputA1->Text);
			}
		}
		if (TrigoChoices->SelectedItem->ToString() == "FIND TANGENT")
		{
			if (InputA1->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag1 = 3;
				a1 = double::Parse(InputA1->Text);
			}
		}
		if (TrigoChoices->SelectedItem->ToString() == "FIND COTANGENT")
		{
			if (InputA1->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag1 = 4;
				a1 = double::Parse(InputA1->Text);
			}
		}
		if (TrigoChoices->SelectedItem->ToString() == "FIND COSECANT")
		{
			if (InputA1->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag1 = 5;
				a1 = double::Parse(InputA1->Text);
			}
		}
		if (TrigoChoices->SelectedItem->ToString() == "FIND SECANT")
		{
			if (InputA1->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag1 = 6;
				a1 = double::Parse(InputA1->Text);
			}
		}
	}
	private: System::Void Eq1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA1->Text == "")
			MessageBox::Show("Enter the values for A");
			Res1->Text = "";
		if (TrigoChoices->Text == "")
		{
			MessageBox::Show("Choose A Trigonometric Function");
			Res1->Text = "";
		}
		if (flag1 == 1)
		{
			ans1 = sinf(a1 * PI / 180);
			Res1->Text = Convert::ToString(ans1);
		}
		else if (flag1 == 2)
		{
			ans1 = cosf(a1 * PI / 180);
			Res1->Text = Convert::ToString(ans1);
		}
		else if (flag1 == 3)
		{
			ans1 = tanf(a1 * PI / 180);
			Res1->Text = Convert::ToString(ans1);
		}
		else if (flag1 == 4)
		{
			ans1 = 1 / tanf(a1 * PI / 180);
			Res1->Text = Convert::ToString(ans1);
		}
		else if (flag1 == 5)
		{
			ans1 = 1 / (sinf(a1 * PI / 180));
			Res1->Text = Convert::ToString(ans1);
		}
		else if (flag1 == 6)
		{
			ans1 = 1 / cosf(a1 * PI / 180);
			Res1->Text = Convert::ToString(ans1);
		}
	}
	private: System::Void del1_Click(System::Object^ sender, System::EventArgs^ e) {
		Res1->Clear();
		InputA1->Clear();
		TrigoChoices->Text = "";
	}
	private: System::Void TrigoHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("1. Enter a Value\n2. Choose a Trigonometric Function\n3. Click Equal Sign for the output\n4. Repeat");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		home->Close();
	}
	private: System::Void HB1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		home->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("There is no formulaic table to show");
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Res1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InputA1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Trigo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
