#pragma once

namespace DLicense {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dlicense
	/// </summary>
	public ref class Dlicense : public System::Windows::Forms::Form
	{
	public:
		Dlicense(void)
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
		~Dlicense()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ FromIntro;
	private: System::Windows::Forms::Label^ Qt;

	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::Label^ Res;
	private: System::Windows::Forms::Button^ YES;

	private:


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ NO;
	private: System::Windows::Forms::Button^ NO1;


	private: System::Windows::Forms::Button^ YES1;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ NO2;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ NO4;

	private: System::Windows::Forms::Button^ YES4;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Button^ NO3;

	private: System::Windows::Forms::Button^ YES3;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Button^ YES2;
	private: System::Windows::Forms::Label^ Namee;

	private: System::Windows::Forms::TextBox^ Nn;
	private: System::Windows::Forms::Button^ Ent;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ ST;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dlicense::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FromIntro = (gcnew System::Windows::Forms::Label());
			this->Qt = (gcnew System::Windows::Forms::Label());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->Res = (gcnew System::Windows::Forms::Label());
			this->YES = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NO = (gcnew System::Windows::Forms::Button());
			this->NO1 = (gcnew System::Windows::Forms::Button());
			this->YES1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NO2 = (gcnew System::Windows::Forms::Button());
			this->YES2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NO4 = (gcnew System::Windows::Forms::Button());
			this->YES4 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NO3 = (gcnew System::Windows::Forms::Button());
			this->YES3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Namee = (gcnew System::Windows::Forms::Label());
			this->Nn = (gcnew System::Windows::Forms::TextBox());
			this->Ent = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ST = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
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
			this->label2->Location = System::Drawing::Point(71, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 19);
			this->label2->TabIndex = 28;
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
			this->FromIntro->Location = System::Drawing::Point(71, 39);
			this->FromIntro->Name = L"FromIntro";
			this->FromIntro->Size = System::Drawing::Size(233, 19);
			this->FromIntro->TabIndex = 27;
			this->FromIntro->Text = L"From: PUPSTB as BSIT 1-1";
			// 
			// Qt
			// 
			this->Qt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Qt->BackColor = System::Drawing::Color::Transparent;
			this->Qt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Qt->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Qt->Location = System::Drawing::Point(71, 209);
			this->Qt->Name = L"Qt";
			this->Qt->Size = System::Drawing::Size(819, 52);
			this->Qt->TabIndex = 33;
			this->Qt->Text = L"Are you atleast 17 of age and above";
			this->Qt->Visible = false;
			this->Qt->Click += gcnew System::EventHandler(this, &Dlicense::Qt_Click);
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Castellar", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(86, 85);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(1149, 41);
			this->TitleBar->TabIndex = 31;
			this->TitleBar->Text = L"LTO\'S DRIVER LICENSE QUALIFICATION PROGRAM";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Res
			// 
			this->Res->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Res->BackColor = System::Drawing::Color::Transparent;
			this->Res->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Res->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Res->Location = System::Drawing::Point(69, 363);
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(1149, 103);
			this->Res->TabIndex = 30;
			this->Res->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// YES
			// 
			this->YES->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->YES->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->YES->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YES->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->YES->Location = System::Drawing::Point(3, 3);
			this->YES->Name = L"YES";
			this->YES->Size = System::Drawing::Size(122, 38);
			this->YES->TabIndex = 34;
			this->YES->Text = L"YES";
			this->YES->UseVisualStyleBackColor = false;
			this->YES->Visible = false;
			this->YES->Click += gcnew System::EventHandler(this, &Dlicense::YES_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->NO, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->YES, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(154, 264);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(257, 45);
			this->tableLayoutPanel1->TabIndex = 36;
			// 
			// NO
			// 
			this->NO->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->NO->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NO->ForeColor = System::Drawing::Color::Red;
			this->NO->Location = System::Drawing::Point(131, 3);
			this->NO->Name = L"NO";
			this->NO->Size = System::Drawing::Size(123, 38);
			this->NO->TabIndex = 35;
			this->NO->Text = L"NO";
			this->NO->UseVisualStyleBackColor = false;
			this->NO->Visible = false;
			this->NO->Click += gcnew System::EventHandler(this, &Dlicense::NO_Click);
			// 
			// NO1
			// 
			this->NO1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NO1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->NO1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NO1->ForeColor = System::Drawing::Color::Red;
			this->NO1->Location = System::Drawing::Point(131, 3);
			this->NO1->Name = L"NO1";
			this->NO1->Size = System::Drawing::Size(123, 38);
			this->NO1->TabIndex = 35;
			this->NO1->Text = L"NO";
			this->NO1->UseVisualStyleBackColor = false;
			this->NO1->Visible = false;
			this->NO1->Click += gcnew System::EventHandler(this, &Dlicense::NO1_Click_1);
			// 
			// YES1
			// 
			this->YES1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->YES1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->YES1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YES1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->YES1->Location = System::Drawing::Point(3, 3);
			this->YES1->Name = L"YES1";
			this->YES1->Size = System::Drawing::Size(122, 38);
			this->YES1->TabIndex = 34;
			this->YES1->Text = L"YES";
			this->YES1->UseVisualStyleBackColor = false;
			this->YES1->Visible = false;
			this->YES1->Click += gcnew System::EventHandler(this, &Dlicense::YES1_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->NO1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->YES1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(414, 264);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(257, 45);
			this->tableLayoutPanel2->TabIndex = 38;
			// 
			// NO2
			// 
			this->NO2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NO2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->NO2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NO2->ForeColor = System::Drawing::Color::Red;
			this->NO2->Location = System::Drawing::Point(131, 3);
			this->NO2->Name = L"NO2";
			this->NO2->Size = System::Drawing::Size(123, 38);
			this->NO2->TabIndex = 35;
			this->NO2->Text = L"NO";
			this->NO2->UseVisualStyleBackColor = false;
			this->NO2->Visible = false;
			this->NO2->Click += gcnew System::EventHandler(this, &Dlicense::NO2_Click_1);
			// 
			// YES2
			// 
			this->YES2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->YES2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->YES2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YES2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->YES2->Location = System::Drawing::Point(3, 3);
			this->YES2->Name = L"YES2";
			this->YES2->Size = System::Drawing::Size(122, 38);
			this->YES2->TabIndex = 34;
			this->YES2->Text = L"YES";
			this->YES2->UseVisualStyleBackColor = false;
			this->YES2->Visible = false;
			this->YES2->Click += gcnew System::EventHandler(this, &Dlicense::YES2_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->NO2, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->YES2, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(674, 264);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(257, 45);
			this->tableLayoutPanel3->TabIndex = 39;
			// 
			// NO4
			// 
			this->NO4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NO4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->NO4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NO4->ForeColor = System::Drawing::Color::Red;
			this->NO4->Location = System::Drawing::Point(131, 3);
			this->NO4->Name = L"NO4";
			this->NO4->Size = System::Drawing::Size(123, 38);
			this->NO4->TabIndex = 35;
			this->NO4->Text = L"NO";
			this->NO4->UseVisualStyleBackColor = false;
			this->NO4->Visible = false;
			this->NO4->Click += gcnew System::EventHandler(this, &Dlicense::NO4_Click_1);
			// 
			// YES4
			// 
			this->YES4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->YES4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->YES4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YES4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->YES4->Location = System::Drawing::Point(3, 3);
			this->YES4->Name = L"YES4";
			this->YES4->Size = System::Drawing::Size(122, 38);
			this->YES4->TabIndex = 34;
			this->YES4->Text = L"YES";
			this->YES4->UseVisualStyleBackColor = false;
			this->YES4->Visible = false;
			this->YES4->Click += gcnew System::EventHandler(this, &Dlicense::YES4_Click_1);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->NO4, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->YES4, 0, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(527, 315);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(257, 45);
			this->tableLayoutPanel4->TabIndex = 40;
			// 
			// NO3
			// 
			this->NO3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NO3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->NO3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NO3->ForeColor = System::Drawing::Color::Red;
			this->NO3->Location = System::Drawing::Point(131, 3);
			this->NO3->Name = L"NO3";
			this->NO3->Size = System::Drawing::Size(123, 38);
			this->NO3->TabIndex = 35;
			this->NO3->Text = L"NO";
			this->NO3->UseVisualStyleBackColor = false;
			this->NO3->Visible = false;
			this->NO3->Click += gcnew System::EventHandler(this, &Dlicense::NO3_Click_1);
			// 
			// YES3
			// 
			this->YES3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->YES3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->YES3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YES3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->YES3->Location = System::Drawing::Point(3, 3);
			this->YES3->Name = L"YES3";
			this->YES3->Size = System::Drawing::Size(122, 38);
			this->YES3->TabIndex = 34;
			this->YES3->Text = L"YES";
			this->YES3->UseVisualStyleBackColor = false;
			this->YES3->Visible = false;
			this->YES3->Click += gcnew System::EventHandler(this, &Dlicense::YES3_Click);
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->NO3, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->YES3, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(267, 315);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(257, 45);
			this->tableLayoutPanel5->TabIndex = 41;
			// 
			// Namee
			// 
			this->Namee->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Namee->BackColor = System::Drawing::Color::Transparent;
			this->Namee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Namee->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Namee->Location = System::Drawing::Point(71, 129);
			this->Namee->Name = L"Namee";
			this->Namee->Size = System::Drawing::Size(819, 29);
			this->Namee->TabIndex = 43;
			this->Namee->Text = L"Enter Your Full Name: [ Ex. Roland Zeta Regio ]";
			this->Namee->Click += gcnew System::EventHandler(this, &Dlicense::Namee_Click);
			// 
			// Nn
			// 
			this->Nn->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nn->Location = System::Drawing::Point(75, 161);
			this->Nn->Multiline = true;
			this->Nn->Name = L"Nn";
			this->Nn->Size = System::Drawing::Size(431, 32);
			this->Nn->TabIndex = 44;
			// 
			// Ent
			// 
			this->Ent->BackColor = System::Drawing::Color::Silver;
			this->Ent->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ent->ForeColor = System::Drawing::Color::Black;
			this->Ent->Location = System::Drawing::Point(514, 163);
			this->Ent->Name = L"Ent";
			this->Ent->Size = System::Drawing::Size(86, 30);
			this->Ent->TabIndex = 45;
			this->Ent->Text = L"ENTER";
			this->Ent->UseVisualStyleBackColor = false;
			this->Ent->Click += gcnew System::EventHandler(this, &Dlicense::Ent_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(608, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 30);
			this->button2->TabIndex = 46;
			this->button2->Text = L"NEW";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Dlicense::button2_Click);
			// 
			// ST
			// 
			this->ST->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->ST->BackColor = System::Drawing::Color::Silver;
			this->ST->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ST->ForeColor = System::Drawing::Color::Black;
			this->ST->Location = System::Drawing::Point(475, 469);
			this->ST->Name = L"ST";
			this->ST->Size = System::Drawing::Size(330, 34);
			this->ST->TabIndex = 47;
			this->ST->Text = L"START";
			this->ST->UseVisualStyleBackColor = false;
			this->ST->Visible = false;
			this->ST->Click += gcnew System::EventHandler(this, &Dlicense::ST_Click);
			// 
			// Dlicense
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1278, 515);
			this->Controls->Add(this->ST);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Ent);
			this->Controls->Add(this->Nn);
			this->Controls->Add(this->Namee);
			this->Controls->Add(this->tableLayoutPanel5);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FromIntro);
			this->Controls->Add(this->Qt);
			this->Controls->Add(this->TitleBar);
			this->Controls->Add(this->Res);
			this->MinimumSize = System::Drawing::Size(640, 550);
			this->Name = L"Dlicense";
			this->Text = L"Dlicense";
			this->Load += gcnew System::EventHandler(this, &Dlicense::Dlicense_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ent_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ NamaaE = this->Nn->Text;
			Ent->Visible = false;
			ST->Visible = true;
			Res->Text = "Welcome " + NamaaE + " to LTO's Driver License Qualification Program. PREST START!!!";
		}
	private: System::Void YES_Click(System::Object^ sender, System::EventArgs^ e) {
		if (YES) {
			YES->Visible = false;
			NO->Visible = false;
			YES1->Visible = true;
			NO1->Visible = true;
			Qt->Text = "Did you undergone and completed at least 8 hours of Practical Driving Course from any LTO driving school";
		}
	}
	private: System::Void YES1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (YES1) {
			YES1->Visible = false;
			NO1->Visible = false;
			YES2->Visible = true;
			NO2->Visible = true;
			Qt->Text = "Are you able to read and write in Filipino and/or English";
		}
	}
	private: System::Void Qt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void YES2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (YES2) {
			YES2->Visible = false;
			NO2->Visible = false;
			YES3->Visible = true;
			NO3->Visible = true;
			Qt->Text = "Are you physically and mentally fit to operate a motor vehicle";
		}
	}
	private: System::Void YES3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (YES3) {
			YES3->Visible = false;
			NO3->Visible = false;
			YES4->Visible = true;
			NO4->Visible = true;
			Qt->Text = "Do you have a valid Student-Driver's Permit";
		}
	}
	private: System::Void YES4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (YES4) {
			YES4->Visible = false;
			NO4->Visible = false;
			Res->Text = "You have the qualification for LTO's driver license";
		}
	}
	private: System::Void NO_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NO)
			YES->Visible = false;
			NO->Visible = false;
			Res->Text = "You are not qualified for LTO's driver license";
		}
	private: System::Void NO1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (NO1)
			YES1->Visible = false;
			NO1->Visible = false;
			Res->Text = "You are not qualified for LTO's driver license";
	}
	private: System::Void NO2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (NO2)
			YES2->Visible = false;
			NO2->Visible = false;
			Res->Text = "You are not qualified for LTO's driver license";
	}
	private: System::Void NO3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (NO3)
			YES3->Visible = false;
			NO3->Visible = false;
			Res->Text = "You are not qualified for LTO's driver license";
	}
	private: System::Void NO4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (NO4)
			String^ NamaaE = Nn->Text;
			YES4->Visible = false;
			NO4->Visible = false;
			Res->Text = "You are not qualified for LTO's driver license";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button2)
			Res->Text = "";
			Ent->Visible = true;
}
	private: System::Void Dlicense_Load(System::Object^ sender, System::EventArgs^ e) {
		Res->Text = "";
}
	private: System::Void Namee_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void ST_Click(System::Object^ sender, System::EventArgs^ e) {
		Res->Text = "";
		Qt->Visible = true;
		YES->Visible = true;
		NO->Visible = true;
		ST->Visible = false;
	}
};
}
