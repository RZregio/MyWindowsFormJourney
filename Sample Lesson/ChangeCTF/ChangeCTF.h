#pragma once

namespace ChangeCTF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChangeCTF
	/// </summary>
	public ref class ChangeCTF : public System::Windows::Forms::Form
	{
	public:
		ChangeCTF(void)
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
		~ChangeCTF()
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
	private: System::Windows::Forms::ComboBox^ Color;
	private: System::Windows::Forms::ComboBox^ Size;
	private: System::Windows::Forms::ComboBox^ Font;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;









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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FromIntro = (gcnew System::Windows::Forms::Label());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->Color = (gcnew System::Windows::Forms::ComboBox());
			this->Size = (gcnew System::Windows::Forms::ComboBox());
			this->Font = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->label2->Location = System::Drawing::Point(54, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 19);
			this->label2->TabIndex = 21;
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
			this->FromIntro->Location = System::Drawing::Point(54, 87);
			this->FromIntro->Name = L"FromIntro";
			this->FromIntro->Size = System::Drawing::Size(233, 19);
			this->FromIntro->TabIndex = 20;
			this->FromIntro->Text = L"From: PUPSTB as BSIT 1-1";
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleBar->BackColor = System::Drawing::Color::Gainsboro;
			this->TitleBar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TitleBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(69, 133);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(930, 97);
			this->TitleBar->TabIndex = 24;
			this->TitleBar->Text = L"CHANGE COLOR, TEXTSIZE AND FONT PROGRAM";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Color
			// 
			this->Color->FormattingEnabled = true;
			this->Color->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"Aquamarine", L"Bisque", L"Black", L"Blue", L"Chartreuse",
					L"Chocolate", L"Coral", L"Crimson", L"Cyan", L"DeepSkyBlue", L"FireBrick", L"Gold", L"Green", L"Indigo", L"Limegreen", L"Magenta",
					L"Orange", L"Purple", L"Red", L"SandyBrown", L"Silver", L"Tan ", L"Violet", L"Yellow"
			});
			this->Color->Location = System::Drawing::Point(69, 355);
			this->Color->Name = L"Color";
			this->Color->Size = System::Drawing::Size(223, 21);
			this->Color->TabIndex = 27;
			this->Color->SelectedIndexChanged += gcnew System::EventHandler(this, &ChangeCTF::Color_SelectedIndexChanged);
			// 
			// Size
			// 
			this->Size->FormattingEnabled = true;
			this->Size->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"8", L"9", L"10", L"11", L"12", L"14 ", L"16", L"18",
					L"20", L"22", L"24", L"26", L"28"
			});
			this->Size->Location = System::Drawing::Point(411, 355);
			this->Size->Name = L"Size";
			this->Size->Size = System::Drawing::Size(223, 21);
			this->Size->TabIndex = 28;
			this->Size->SelectedIndexChanged += gcnew System::EventHandler(this, &ChangeCTF::Size_SelectedIndexChanged);
			// 
			// Font
			// 
			this->Font->FormattingEnabled = true;
			this->Font->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Algerian", L"Arial", L"Arial Black", L"Bookman Old Style",
					L"Calibri", L"Consolas", L"Georgia", L"Impact", L"Open Sans", L"Papyrus", L"Segeo UI", L"Tahoma", L"Times New Roman"
			});
			this->Font->Location = System::Drawing::Point(758, 355);
			this->Font->Name = L"Font";
			this->Font->Size = System::Drawing::Size(223, 21);
			this->Font->TabIndex = 29;
			this->Font->SelectedIndexChanged += gcnew System::EventHandler(this, &ChangeCTF::Font_SelectedIndexChanged);
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
			this->label1->Location = System::Drawing::Point(97, 312);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 19);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Choose Color";
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
			this->label3->Location = System::Drawing::Point(435, 312);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 19);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Choose Text Size";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(776, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 19);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Choose Text font";
			// 
			// ChangeCTF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1059, 515);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Font);
			this->Controls->Add(this->Size);
			this->Controls->Add(this->Color);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FromIntro);
			this->Controls->Add(this->TitleBar);
			this->MinimumSize = System::Drawing::Size(640, 550);
			this->Name = L"ChangeCTF";
			this->Text = L"ChangeCTF";
			this->Load += gcnew System::EventHandler(this, &ChangeCTF::ChangeCTF_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangeCTF_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Color_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBox^ comboBox = (ComboBox^)(sender);
		if (comboBox->SelectedItem->ToString() == "Aquamarine")
		{
			TitleBar->ForeColor = BackColor.Aquamarine;
		}
		if (comboBox->SelectedItem->ToString() == "Bisque")
		{
			TitleBar->ForeColor = BackColor.Bisque;
		}
		if (comboBox->SelectedItem->ToString() == "Black")
		{
			TitleBar->ForeColor = BackColor.Black;
		}
		if (comboBox->SelectedItem->ToString() == "Blue")
		{
			TitleBar->ForeColor = BackColor.Blue;
		}
		if (comboBox->SelectedItem->ToString() == "Chartreuse")
		{
			TitleBar->ForeColor = BackColor.Chartreuse;
		}
		if (comboBox->SelectedItem->ToString() == "Chocolate")
		{
			TitleBar->ForeColor = BackColor.Chocolate;
		}
		if (comboBox->SelectedItem->ToString() == "Coral")
		{
			TitleBar->ForeColor = BackColor.Coral;
		}
		if (comboBox->SelectedItem->ToString() == "Crimson")
		{
			TitleBar->ForeColor = BackColor.Crimson;
		}
		if (comboBox->SelectedItem->ToString() == "Cyan")
		{
			TitleBar->ForeColor = BackColor.Cyan;
		}
		if (comboBox->SelectedItem->ToString() == "DeepSkyBlue")
		{
			TitleBar->ForeColor = BackColor.DeepSkyBlue;
		}
		if (comboBox->SelectedItem->ToString() == "FireBrick")
		{
			TitleBar->ForeColor = BackColor.Firebrick;
		}
		if (comboBox->SelectedItem->ToString() == "Gold")
		{
			TitleBar->ForeColor = BackColor.Gold;
		}
		if (comboBox->SelectedItem->ToString() == "Green")
		{
			TitleBar->ForeColor = BackColor.Green;
		}
		if (comboBox->SelectedItem->ToString() == "Indigo")
		{
			TitleBar->ForeColor = BackColor.Indigo;
		}
		if (comboBox->SelectedItem->ToString() == "Limegreen")
		{
			TitleBar->ForeColor = BackColor.LimeGreen;
		}
		if (comboBox->SelectedItem->ToString() == "Magenta")
		{
			TitleBar->ForeColor = BackColor.Magenta;
		}
		if (comboBox->SelectedItem->ToString() == "Orange")
		{
			TitleBar->ForeColor = BackColor.Orange;
		}
		if (comboBox->SelectedItem->ToString() == "Purple")
		{
			TitleBar->ForeColor = BackColor.Purple;
		}
		if (comboBox->SelectedItem->ToString() == "Red")
		{
			TitleBar->ForeColor = BackColor.Red;
		}
		if (comboBox->SelectedItem->ToString() == "SandyBrown")
		{
			TitleBar->ForeColor = BackColor.SandyBrown;
		}
		if (comboBox->SelectedItem->ToString() == "Silver")
		{
			TitleBar->ForeColor = BackColor.Silver;
		}
		if (comboBox->SelectedItem->ToString() == "Tan ")
		{
			TitleBar->ForeColor = BackColor.Tan;
		}
		if (comboBox->SelectedItem->ToString() == "Violet")
		{
			TitleBar->ForeColor = BackColor.Violet;
		}
		if (comboBox->SelectedItem->ToString() == "Yellow")
		{
			TitleBar->ForeColor = BackColor.Yellow;
		}
	}
	private: System::Void Size_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBox^ comboBox = (ComboBox^)(sender);
		if (comboBox->SelectedItem != nullptr)
		{
			int nSize = int::Parse(comboBox->SelectedItem->ToString());
			TitleBar->Font = gcnew System::Drawing::Font(TitleBar->Font->FontFamily, nSize);
		}
	}
	private: System::Void Font_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBox^ comboBox = (ComboBox^)(sender);
		if (comboBox->SelectedItem->ToString() == "Algerian")
		{
			TitleBar->Font = gcnew Drawing::Font("Algerian", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Arial")
		{
			TitleBar->Font = gcnew Drawing::Font("Arial", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Arial Black")
		{
			TitleBar->Font = gcnew Drawing::Font("Arial Black", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Bookman Old Style")
		{
			TitleBar->Font = gcnew Drawing::Font("Bookman Old Style", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Calibri")
		{
			TitleBar->Font = gcnew Drawing::Font("Calibri", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Consolas")
		{
			TitleBar->Font = gcnew Drawing::Font("Consolas", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Georgia")
		{
			TitleBar->Font = gcnew Drawing::Font("Georgia", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Impact")
		{
			TitleBar->Font = gcnew Drawing::Font("Impact", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Open Sans")
		{
			TitleBar->Font = gcnew Drawing::Font("Open Sans", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Papyrus")
		{
			TitleBar->Font = gcnew Drawing::Font("Papyrus", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Segeo UI")
		{
			TitleBar->Font = gcnew Drawing::Font("Segeo UI", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Tahoma")
		{
			TitleBar->Font = gcnew Drawing::Font("Tahoma", 18);
		}
		if (comboBox->SelectedItem->ToString() == "Times New Roman")
		{
			TitleBar->Font = gcnew Drawing::Font("Times New Roman", 18);
		}
}
};
}
