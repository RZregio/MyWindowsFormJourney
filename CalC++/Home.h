#pragma once
#include "SC.h"
#include "Trigo.h"
#include "Geo.h"
#include "Temp.h"
#include "Metric.h"
#include "About.h"
namespace CalC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Calc;
	protected:

	protected:


	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ TFS;
	private: System::Windows::Forms::Button^ Abt;



	private: System::Windows::Forms::Button^ TC;
	private: System::Windows::Forms::Button^ MT;


	private: System::Windows::Forms::Button^ GAS;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->Calc = (gcnew System::Windows::Forms::Button());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TFS = (gcnew System::Windows::Forms::Button());
			this->Abt = (gcnew System::Windows::Forms::Button());
			this->TC = (gcnew System::Windows::Forms::Button());
			this->MT = (gcnew System::Windows::Forms::Button());
			this->GAS = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Calc
			// 
			this->Calc->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Calc->BackColor = System::Drawing::Color::Transparent;
			this->Calc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Calc->FlatAppearance->BorderSize = 0;
			this->Calc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->Calc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->Calc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Calc->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calc->ForeColor = System::Drawing::Color::Black;
			this->Calc->Location = System::Drawing::Point(172, 192);
			this->Calc->Name = L"Calc";
			this->Calc->Size = System::Drawing::Size(194, 36);
			this->Calc->TabIndex = 3;
			this->Calc->Text = L"Open Calculator";
			this->Calc->UseVisualStyleBackColor = false;
			this->Calc->Click += gcnew System::EventHandler(this, &Home::Calc_Click);
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(0, 1);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(249, 51);
			this->TitleBar->TabIndex = 59;
			this->TitleBar->Text = L"CMATHings ™";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->TitleBar->Click += gcnew System::EventHandler(this, &Home::TitleBar_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 54);
			this->panel1->TabIndex = 106;
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->Controls->Add(this->TitleBar);
			this->panel2->Location = System::Drawing::Point(220, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 51);
			this->panel2->TabIndex = 107;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(586, 7);
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
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->Location = System::Drawing::Point(542, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 32);
			this->button3->TabIndex = 104;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(626, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 37);
			this->button1->TabIndex = 102;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(489, 45);
			this->label1->TabIndex = 107;
			this->label1->Text = L"WELCOME TO CMATHings™";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Home::label1_Click);
			// 
			// TFS
			// 
			this->TFS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TFS->BackColor = System::Drawing::Color::Transparent;
			this->TFS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->TFS->FlatAppearance->BorderSize = 0;
			this->TFS->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->TFS->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->TFS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TFS->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TFS->ForeColor = System::Drawing::Color::Black;
			this->TFS->Location = System::Drawing::Point(172, 234);
			this->TFS->Name = L"TFS";
			this->TFS->Size = System::Drawing::Size(382, 36);
			this->TFS->TabIndex = 108;
			this->TFS->Text = L"Open Trigonometric Function Solver";
			this->TFS->UseVisualStyleBackColor = false;
			this->TFS->Click += gcnew System::EventHandler(this, &Home::TFS_Click);
			// 
			// Abt
			// 
			this->Abt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Abt->BackColor = System::Drawing::Color::Transparent;
			this->Abt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Abt->FlatAppearance->BorderSize = 0;
			this->Abt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->Abt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->Abt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Abt->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Abt->ForeColor = System::Drawing::Color::Black;
			this->Abt->Location = System::Drawing::Point(172, 402);
			this->Abt->Name = L"Abt";
			this->Abt->Size = System::Drawing::Size(94, 36);
			this->Abt->TabIndex = 109;
			this->Abt->Text = L"About";
			this->Abt->UseVisualStyleBackColor = false;
			this->Abt->Click += gcnew System::EventHandler(this, &Home::Abt_Click);
			// 
			// TC
			// 
			this->TC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TC->BackColor = System::Drawing::Color::Transparent;
			this->TC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->TC->FlatAppearance->BorderSize = 0;
			this->TC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->TC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->TC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TC->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TC->ForeColor = System::Drawing::Color::Black;
			this->TC->Location = System::Drawing::Point(172, 318);
			this->TC->Name = L"TC";
			this->TC->Size = System::Drawing::Size(313, 36);
			this->TC->TabIndex = 110;
			this->TC->Text = L"Open Temperature Converter";
			this->TC->UseVisualStyleBackColor = false;
			this->TC->Click += gcnew System::EventHandler(this, &Home::TC_Click);
			// 
			// MT
			// 
			this->MT->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MT->BackColor = System::Drawing::Color::Transparent;
			this->MT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->MT->FlatAppearance->BorderSize = 0;
			this->MT->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->MT->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->MT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MT->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MT->ForeColor = System::Drawing::Color::Black;
			this->MT->Location = System::Drawing::Point(172, 360);
			this->MT->Name = L"MT";
			this->MT->Size = System::Drawing::Size(207, 36);
			this->MT->TabIndex = 111;
			this->MT->Text = L"Open Metric Table";
			this->MT->UseVisualStyleBackColor = false;
			this->MT->Click += gcnew System::EventHandler(this, &Home::MT_Click);
			// 
			// GAS
			// 
			this->GAS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GAS->BackColor = System::Drawing::Color::Transparent;
			this->GAS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->GAS->FlatAppearance->BorderSize = 0;
			this->GAS->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->GAS->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->GAS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GAS->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GAS->ForeColor = System::Drawing::Color::Black;
			this->GAS->Location = System::Drawing::Point(172, 276);
			this->GAS->Name = L"GAS";
			this->GAS->Size = System::Drawing::Size(306, 36);
			this->GAS->TabIndex = 112;
			this->GAS->Text = L"Open Geometric Area Solver";
			this->GAS->UseVisualStyleBackColor = false;
			this->GAS->Click += gcnew System::EventHandler(this, &Home::GAS_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(124, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 36);
			this->label2->TabIndex = 113;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Home::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(124, 318);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 36);
			this->label3->TabIndex = 114;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &Home::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(124, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 36);
			this->label4->TabIndex = 115;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Home::label4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(124, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 36);
			this->label5->TabIndex = 116;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &Home::label5_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(124, 360);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 36);
			this->label6->TabIndex = 117;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &Home::label6_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(124, 402);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 36);
			this->label7->TabIndex = 118;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &Home::label7_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(667, 550);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->GAS);
			this->Controls->Add(this->MT);
			this->Controls->Add(this->TC);
			this->Controls->Add(this->Abt);
			this->Controls->Add(this->TFS);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Calc);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(667, 550);
			this->MinimumSize = System::Drawing::Size(667, 550);
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TitleBar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Calc_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		SC^ scalc = gcnew SC(this);
		scalc->Show();
	}
	private: System::Void TFS_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Trigo^ trigo = gcnew Trigo(this);
		trigo->Show();
	}
	private: System::Void GAS_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Geo^ geo = gcnew Geo(this);
		geo->Show();
	}
	private: System::Void TC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Temp^ temp = gcnew Temp(this);
		temp->Show();
	}
	private: System::Void MT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Metric^ metric = gcnew Metric(this);
		metric->Show();
	}
	private: System::Void Abt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		About^ about = gcnew About(this);
		about->Show();
	}
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
