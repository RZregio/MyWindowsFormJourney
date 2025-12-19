#pragma once

namespace OddEven {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OddEven
	/// </summary>
	public ref class OddEven : public System::Windows::Forms::Form
	{
	public:
		OddEven(void)
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
		~OddEven()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Res;
	protected:
	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::TextBox^ Num;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ FromIntro;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::TableLayoutPanel^ TB;

	protected:








	protected:
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
			this->Res = (gcnew System::Windows::Forms::Label());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->Num = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FromIntro = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->TB = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TB->SuspendLayout();
			this->SuspendLayout();
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
			this->Res->Location = System::Drawing::Point(250, 265);
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(570, 70);
			this->Res->TabIndex = 16;
			this->Res->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Castellar", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(56, 135);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(930, 41);
			this->TitleBar->TabIndex = 17;
			this->TitleBar->Text = L"ODD || EVEN PROGRAM";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Num
			// 
			this->Num->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num->Location = System::Drawing::Point(59, 210);
			this->Num->Multiline = true;
			this->Num->Name = L"Num";
			this->Num->Size = System::Drawing::Size(215, 31);
			this->Num->TabIndex = 18;
			this->Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->label1->Location = System::Drawing::Point(52, 188);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 19);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Enter the desired number:";
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
			this->FromIntro->Location = System::Drawing::Point(41, 89);
			this->FromIntro->Name = L"FromIntro";
			this->FromIntro->Size = System::Drawing::Size(233, 19);
			this->FromIntro->TabIndex = 13;
			this->FromIntro->Text = L"From: PUPSTB as BSIT 1-1";
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
			this->label2->Location = System::Drawing::Point(41, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 19);
			this->label2->TabIndex = 14;
			this->label2->Text = L"CREATED BY: ROLAND Z. REGIO";
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
			this->Enter->Text = L"ENTER NUMBER";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Click += gcnew System::EventHandler(this, &OddEven::Enter_Click);
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
			this->TB->Location = System::Drawing::Point(56, 358);
			this->TB->Name = L"TB";
			this->TB->RowCount = 1;
			this->TB->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB->Size = System::Drawing::Size(935, 101);
			this->TB->TabIndex = 15;
			// 
			// OddEven
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1059, 515);
			this->Controls->Add(this->TB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FromIntro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Num);
			this->Controls->Add(this->TitleBar);
			this->Controls->Add(this->Res);
			this->MinimumSize = System::Drawing::Size(640, 550);
			this->Name = L"OddEven";
			this->Text = L"OddEven";
			this->Load += gcnew System::EventHandler(this, &OddEven::OddEven_Load);
			this->TB->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OddEven_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		int result = System::Convert::ToInt64(Num->Text);
		if (result % 2 == 0) {
			Res->Text = "The number entered is an even number";
		}
		else
		{
			Res->Text = "The number entered is an odd number";
		}
	}
};
}
