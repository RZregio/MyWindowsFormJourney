#pragma once
#include<conio.h>
#include<math.h>  
double ans3, a3;
int flag3 = 0;
using namespace std;
namespace CalC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Temp
	/// </summary>
	public ref class Temp : public System::Windows::Forms::Form
	{
	public:
		Form^ home;
		Temp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Temp(Form^ temp)
		{
			home = temp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Temp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:

	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::Button^ Out2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ HB;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Select3;
	private: System::Windows::Forms::ComboBox^ TempChoices;


	private: System::Windows::Forms::Label^ N1a;
	private: System::Windows::Forms::TextBox^ Res3;


	private: System::Windows::Forms::TextBox^ InputA3;
	private: System::Windows::Forms::Button^ del3;
	private: System::Windows::Forms::Button^ Eq3;



	private: System::Windows::Forms::Button^ TempHelp;
	private: System::Windows::Forms::Label^ N2a;
	private: System::Windows::Forms::Label^ Tempmula1;
	private: System::Windows::Forms::Label^ Tempmula;
	private: System::Windows::Forms::Button^ In2;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Temp::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->Out2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->In2 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->HB = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Select3 = (gcnew System::Windows::Forms::Label());
			this->TempChoices = (gcnew System::Windows::Forms::ComboBox());
			this->N1a = (gcnew System::Windows::Forms::Label());
			this->Res3 = (gcnew System::Windows::Forms::TextBox());
			this->InputA3 = (gcnew System::Windows::Forms::TextBox());
			this->del3 = (gcnew System::Windows::Forms::Button());
			this->Eq3 = (gcnew System::Windows::Forms::Button());
			this->TempHelp = (gcnew System::Windows::Forms::Button());
			this->N2a = (gcnew System::Windows::Forms::Label());
			this->Tempmula1 = (gcnew System::Windows::Forms::Label());
			this->Tempmula = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->label2->TabIndex = 145;
			this->label2->Text = L"Temperature Conversion";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// Out2
			// 
			this->Out2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Out2->BackColor = System::Drawing::Color::Transparent;
			this->Out2->FlatAppearance->BorderSize = 0;
			this->Out2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Out2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->Out2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Out2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Out2->ForeColor = System::Drawing::Color::White;
			this->Out2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Out2.Image")));
			this->Out2->Location = System::Drawing::Point(7, 10);
			this->Out2->Name = L"Out2";
			this->Out2->Size = System::Drawing::Size(45, 41);
			this->Out2->TabIndex = 106;
			this->Out2->UseVisualStyleBackColor = false;
			this->Out2->Click += gcnew System::EventHandler(this, &Temp::Out2_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->In2);
			this->panel1->Controls->Add(this->TitleBar);
			this->panel1->Controls->Add(this->Out2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->HB);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 61);
			this->panel1->TabIndex = 142;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Temp::panel1_Paint);
			// 
			// In2
			// 
			this->In2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->In2->BackColor = System::Drawing::Color::Transparent;
			this->In2->FlatAppearance->BorderSize = 0;
			this->In2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->In2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->In2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->In2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->In2->ForeColor = System::Drawing::Color::White;
			this->In2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"In2.Image")));
			this->In2->Location = System::Drawing::Point(106, 3);
			this->In2->Name = L"In2";
			this->In2->Size = System::Drawing::Size(45, 46);
			this->In2->TabIndex = 109;
			this->In2->UseVisualStyleBackColor = false;
			this->In2->Visible = false;
			this->In2->Click += gcnew System::EventHandler(this, &Temp::In2_Click);
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
			this->HB->Click += gcnew System::EventHandler(this, &Temp::HB_Click);
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
			this->button3->Click += gcnew System::EventHandler(this, &Temp::button3_Click);
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
			this->button1->Click += gcnew System::EventHandler(this, &Temp::button1_Click);
			// 
			// Select3
			// 
			this->Select3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Select3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select3->Location = System::Drawing::Point(114, 225);
			this->Select3->Name = L"Select3";
			this->Select3->Size = System::Drawing::Size(187, 47);
			this->Select3->TabIndex = 168;
			this->Select3->Text = L"Select a conversion:";
			this->Select3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TempChoices
			// 
			this->TempChoices->AllowDrop = true;
			this->TempChoices->BackColor = System::Drawing::Color::Silver;
			this->TempChoices->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TempChoices->FormattingEnabled = true;
			this->TempChoices->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"CELSIUS TO FAHRENHEIT", L"CELSIUS TO KELVIN",
					L"FAHRENHEIT TO CELSIUS", L"FAHRENHEIT TO KELVIN", L"KELVIN TO CELSIUS", L"KELVIN TO FAHRENHEIT"
			});
			this->TempChoices->Location = System::Drawing::Point(307, 236);
			this->TempChoices->Name = L"TempChoices";
			this->TempChoices->Size = System::Drawing::Size(208, 27);
			this->TempChoices->TabIndex = 167;
			this->TempChoices->SelectedIndexChanged += gcnew System::EventHandler(this, &Temp::TempChoices_SelectedIndexChanged);
			// 
			// N1a
			// 
			this->N1a->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->N1a->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N1a->Location = System::Drawing::Point(9, 178);
			this->N1a->Name = L"N1a";
			this->N1a->Size = System::Drawing::Size(99, 41);
			this->N1a->TabIndex = 166;
			this->N1a->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->N1a->Click += gcnew System::EventHandler(this, &Temp::N1a_Click);
			// 
			// Res3
			// 
			this->Res3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Res3->BackColor = System::Drawing::Color::Silver;
			this->Res3->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Res3->Location = System::Drawing::Point(108, 290);
			this->Res3->Multiline = true;
			this->Res3->Name = L"Res3";
			this->Res3->Size = System::Drawing::Size(374, 158);
			this->Res3->TabIndex = 165;
			this->Res3->TextChanged += gcnew System::EventHandler(this, &Temp::Res3_TextChanged);
			// 
			// InputA3
			// 
			this->InputA3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputA3->BackColor = System::Drawing::Color::Silver;
			this->InputA3->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputA3->Location = System::Drawing::Point(114, 178);
			this->InputA3->Multiline = true;
			this->InputA3->Name = L"InputA3";
			this->InputA3->Size = System::Drawing::Size(459, 41);
			this->InputA3->TabIndex = 164;
			this->InputA3->TextChanged += gcnew System::EventHandler(this, &Temp::InputA3_TextChanged);
			// 
			// del3
			// 
			this->del3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->del3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->del3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del3->ForeColor = System::Drawing::Color::White;
			this->del3->Location = System::Drawing::Point(488, 290);
			this->del3->Name = L"del3";
			this->del3->Size = System::Drawing::Size(85, 73);
			this->del3->TabIndex = 163;
			this->del3->Text = L"CE";
			this->del3->UseVisualStyleBackColor = false;
			this->del3->Click += gcnew System::EventHandler(this, &Temp::del3_Click);
			// 
			// Eq3
			// 
			this->Eq3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Eq3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Eq3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eq3->ForeColor = System::Drawing::Color::White;
			this->Eq3->Location = System::Drawing::Point(488, 369);
			this->Eq3->Name = L"Eq3";
			this->Eq3->Size = System::Drawing::Size(85, 79);
			this->Eq3->TabIndex = 162;
			this->Eq3->Text = L"=";
			this->Eq3->UseVisualStyleBackColor = false;
			this->Eq3->Click += gcnew System::EventHandler(this, &Temp::Eq3_Click);
			// 
			// TempHelp
			// 
			this->TempHelp->BackColor = System::Drawing::Color::Transparent;
			this->TempHelp->FlatAppearance->BorderSize = 0;
			this->TempHelp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->TempHelp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->TempHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TempHelp->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TempHelp->Location = System::Drawing::Point(615, 67);
			this->TempHelp->Name = L"TempHelp";
			this->TempHelp->Size = System::Drawing::Size(39, 47);
			this->TempHelp->TabIndex = 169;
			this->TempHelp->Text = L"\?";
			this->TempHelp->UseVisualStyleBackColor = false;
			this->TempHelp->Click += gcnew System::EventHandler(this, &Temp::TempHelp_Click);
			// 
			// N2a
			// 
			this->N2a->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->N2a->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N2a->Location = System::Drawing::Point(1, 290);
			this->N2a->Name = L"N2a";
			this->N2a->Size = System::Drawing::Size(101, 40);
			this->N2a->TabIndex = 170;
			this->N2a->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Tempmula1
			// 
			this->Tempmula1->BackColor = System::Drawing::Color::Gray;
			this->Tempmula1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tempmula1->Location = System::Drawing::Point(5, 64);
			this->Tempmula1->Name = L"Tempmula1";
			this->Tempmula1->Size = System::Drawing::Size(577, 60);
			this->Tempmula1->TabIndex = 172;
			this->Tempmula1->Text = L"TEMPERATURE CONVERSION FORMULAE\r\nCONVERSION OF \? TO \?       FORMULA";
			this->Tempmula1->Visible = false;
			this->Tempmula1->Click += gcnew System::EventHandler(this, &Temp::Geomula1_Click);
			// 
			// Tempmula
			// 
			this->Tempmula->BackColor = System::Drawing::Color::Gray;
			this->Tempmula->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tempmula->Location = System::Drawing::Point(5, 123);
			this->Tempmula->Name = L"Tempmula";
			this->Tempmula->Size = System::Drawing::Size(577, 149);
			this->Tempmula->TabIndex = 171;
			this->Tempmula->Text = resources->GetString(L"Tempmula.Text");
			this->Tempmula->Visible = false;
			this->Tempmula->Click += gcnew System::EventHandler(this, &Temp::Tempmula_Click);
			// 
			// Temp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(666, 550);
			this->Controls->Add(this->Tempmula1);
			this->Controls->Add(this->Tempmula);
			this->Controls->Add(this->N2a);
			this->Controls->Add(this->TempHelp);
			this->Controls->Add(this->Select3);
			this->Controls->Add(this->TempChoices);
			this->Controls->Add(this->N1a);
			this->Controls->Add(this->Res3);
			this->Controls->Add(this->InputA3);
			this->Controls->Add(this->del3);
			this->Controls->Add(this->Eq3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(666, 550);
			this->MinimumSize = System::Drawing::Size(666, 550);
			this->Name = L"Temp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Temp";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		home->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		home->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void TempChoices_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TempChoices->SelectedItem->ToString() == "CELSIUS TO FAHRENHEIT")
		{
			N1a->Text = "Celsius:";
			N2a->Text = "Fahrenheit:";
			if (InputA3->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag3 = 1;
				a3 = double::Parse(InputA3->Text);
			}
		}
		if (TempChoices->SelectedItem->ToString() == "CELSIUS TO KELVIN")
		{
			N1a->Text = "Celsius:";
			N2a->Text = "Kelvin:";
			if (InputA3->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag3 = 2;
				a3 = double::Parse(InputA3->Text);
			}
		}
		if (TempChoices->SelectedItem->ToString() == "FAHRENHEIT TO CELSIUS")
		{
			N1a->Text = "Fahrenheit:";
			N2a->Text = "Celsius:";
			if (InputA3->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag3 = 3;
				a3 = double::Parse(InputA3->Text);
			}
		}
		if (TempChoices->SelectedItem->ToString() == "FAHRENHEIT TO KELVIN")
		{
			N1a->Text = "Fahrenheit:";
			N2a->Text = "Kelvin:";
			if (InputA3->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag3 = 4;
				a3 = double::Parse(InputA3->Text);
			}
		}
		if (TempChoices->SelectedItem->ToString() == "KELVIN TO CELSIUS")
		{
			N1a->Text = "Kelvin:";
			N2a->Text = "Celsius:";
			if (InputA3->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag3 = 5;
				a3 = double::Parse(InputA3->Text);
			}
		}
		if (TempChoices->SelectedItem->ToString() == "KELVIN TO FAHRENHEIT")
		{
			N1a->Text = "Kelvin:";
			N2a->Text = "Fahrenheit:";
			if (InputA3->Text == "")
				MessageBox::Show("Enter a value");
			else
			{
				flag3 = 6;
				a3 = double::Parse(InputA3->Text);
			}
		}

	}
	private: System::Void Eq3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InputA3->Text == "")
			MessageBox::Show("Enter the value");
			Res3->Text = "";
		if (TempChoices->Text == "")
		{
			MessageBox::Show("Choose a Conversion");
			Res3->Text = "";
		}
		if (flag3 == 1)
		{
			ans3 = (a3 * 9 / 5) + 32;
			Res3->Text = Convert::ToString(ans3);
		}
		else if (flag3 == 2)
		{
			ans3 = a3 + 273.15;
			Res3->Text = Convert::ToString(ans3);
		}
		else if (flag3 == 3)
		{
			ans3 = (a3 - 32) * 5 / 9;
			Res3->Text = Convert::ToString(ans3);
		}
		else if (flag3 == 4)
		{
			ans3 = (a3 + 459.67) * 5 / 9;
			Res3->Text = Convert::ToString(ans3);
		}
		else if (flag3 == 5)
		{
			ans3 = a3 - 273.15;
			Res3->Text = Convert::ToString(ans3);
		}
		else if (flag3 == 6)
		{
			ans3 = (a3 - 273.15) * 1.8 + 32;
			Res3->Text = Convert::ToString(ans3);
		}
	}
	private: System::Void del3_Click(System::Object^ sender, System::EventArgs^ e) {
		Res3->Clear();
		InputA3->Clear();
		TempChoices->Text = "";
	}
	private: System::Void TempHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("1. Enter a Value\n2. Choose a conversion\n3. Click Equal Sign for the output\n4. Repeat");
	}
	private: System::Void Out2_Click(System::Object^ sender, System::EventArgs^ e) {
		Tempmula->Visible = true;
		Tempmula1->Visible = true;
		Out2->Visible = false;
		In2->Visible = true;
		In2->Location = Out2->Location;
	}
	private: System::Void In2_Click(System::Object^ sender, System::EventArgs^ e) {
		Tempmula->Visible = false;
		Tempmula1->Visible = false;
		Out2->Visible = true;
		In2->Visible = false;
		In2->Location = Out2->Location;
	}
	private: System::Void InputA3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Res3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void N1a_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Geomula1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Tempmula_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
