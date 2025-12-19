#pragma once

namespace FIRSTUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ FirstName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ LastName;
	private: System::Windows::Forms::Label^ Submit;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LastName = (gcnew System::Windows::Forms::TextBox());
			this->Submit = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// FirstName
			// 
			this->FirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstName->Location = System::Drawing::Point(14, 38);
			this->FirstName->Multiline = true;
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(375, 23);
			this->FirstName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Last Name";
			// 
			// LastName
			// 
			this->LastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LastName->Location = System::Drawing::Point(14, 106);
			this->LastName->Multiline = true;
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(375, 23);
			this->LastName->TabIndex = 3;
			this->LastName->TextChanged += gcnew System::EventHandler(this, &MainForm::LastName_TextChanged);
			// 
			// Submit
			// 
			this->Submit->AutoSize = true;
			this->Submit->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Submit->Location = System::Drawing::Point(13, 160);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(59, 19);
			this->Submit->TabIndex = 4;
			this->Submit->Text = L"label3";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->b1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->b2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(17, 397);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(371, 53);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// b1
			// 
			this->b1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->b1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b1->Location = System::Drawing::Point(3, 3);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(179, 47);
			this->b1->TabIndex = 0;
			this->b1->Text = L"OK";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &MainForm::b1_Click);
			// 
			// b2
			// 
			this->b2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->b2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b2->Location = System::Drawing::Point(188, 3);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(180, 47);
			this->b2->TabIndex = 1;
			this->b2->Text = L"CLEAR";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &MainForm::b2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(403, 462);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Submit);
			this->Controls->Add(this->LastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FirstName);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(419, 500);
			this->Name = L"MainForm";
			this->Text = L"Welcome ";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LastName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstName = this->FirstName->Text;
		String^ lastName = this->LastName->Text;
		this->Submit->Text = "Hello " + firstName + " " + lastName;
	}
	private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->FirstName->Text = "";
		this->LastName->Text = "";
		this->Submit->Text = "";
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Submit->Text = "";
	}
};
}
