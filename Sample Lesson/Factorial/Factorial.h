#pragma once

namespace Factorial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Factorial
	/// </summary>
	public ref class Factorial : public System::Windows::Forms::Form
	{
	public:
		Factorial(void)
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
		~Factorial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ FromIntro;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Input;
	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::Label^ Res;
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ TB;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Factorial::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FromIntro = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->Res = (gcnew System::Windows::Forms::Label());
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TB = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TB->SuspendLayout();
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
			this->label2->Location = System::Drawing::Point(54, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 19);
			this->label2->TabIndex = 37;
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
			this->FromIntro->Location = System::Drawing::Point(54, 64);
			this->FromIntro->Name = L"FromIntro";
			this->FromIntro->Size = System::Drawing::Size(233, 19);
			this->FromIntro->TabIndex = 36;
			this->FromIntro->Text = L"From: PUPSTB as BSIT 1-1";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 19);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Enter Positive Integer:";
			// 
			// Input
			// 
			this->Input->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input->Location = System::Drawing::Point(72, 185);
			this->Input->Multiline = true;
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(386, 31);
			this->Input->TabIndex = 41;
			this->Input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Castellar", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(69, 110);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(930, 41);
			this->TitleBar->TabIndex = 40;
			this->TitleBar->Text = L"FACTORIAL PROGRAM";
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
			this->Res->Location = System::Drawing::Point(250, 280);
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(570, 70);
			this->Res->TabIndex = 39;
			this->Res->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Enter
			// 
			this->Enter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Enter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Enter->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Enter->Location = System::Drawing::Point(5, 5);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(925, 91);
			this->Enter->TabIndex = 2;
			this->Enter->Text = L"Compute Factorial";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Click += gcnew System::EventHandler(this, &Factorial::Enter_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(65, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 19);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Factorial";
			// 
			// TB
			// 
			this->TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->TB->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->TB->ColumnCount = 1;
			this->TB->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB->Controls->Add(this->Enter, 0, 0);
			this->TB->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB->Location = System::Drawing::Point(69, 377);
			this->TB->Name = L"TB";
			this->TB->RowCount = 1;
			this->TB->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB->Size = System::Drawing::Size(935, 101);
			this->TB->TabIndex = 38;
			// 
			// Factorial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1059, 512);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FromIntro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->TitleBar);
			this->Controls->Add(this->Res);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TB);
			this->MinimumSize = System::Drawing::Size(640, 550);
			this->Name = L"Factorial";
			this->Text = L"Factorial";
			this->TB->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		int n;
		int nfact = 1;
		Int32::TryParse(Input->Text, n);
		if (n > 0) {
			for (int i = 1; i <= n; i++)
				nfact *= i;
			Res->Text = nfact.ToString();
		}
		else
			MessageBox::Show("Please enter a value > 0");
	}
};
}
