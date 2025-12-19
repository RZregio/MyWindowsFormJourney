#pragma once

namespace ColoredMSG {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ColoredMSG
	/// </summary>
	public ref class ColoredMSG : public System::Windows::Forms::Form
	{
	public:
		ColoredMSG(void)
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
		~ColoredMSG()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ TB;
	protected:

	private: System::Windows::Forms::Button^ MSG3;

	private: System::Windows::Forms::Button^ MSG1;
	private: System::Windows::Forms::Label^ NameIntro;
	private: System::Windows::Forms::Label^ FromIntro;
	private: System::Windows::Forms::Label^ MSGwindow;

	private: System::Windows::Forms::Button^ MSG4;
	private: System::Windows::Forms::Button^ MSG2;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::TableLayoutPanel^ TB2;
	private: System::Windows::Forms::Label^ TitleBar;






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
			this->TB = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->MSG4 = (gcnew System::Windows::Forms::Button());
			this->MSG3 = (gcnew System::Windows::Forms::Button());
			this->MSG2 = (gcnew System::Windows::Forms::Button());
			this->MSG1 = (gcnew System::Windows::Forms::Button());
			this->NameIntro = (gcnew System::Windows::Forms::Label());
			this->FromIntro = (gcnew System::Windows::Forms::Label());
			this->MSGwindow = (gcnew System::Windows::Forms::Label());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->TB2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->TB->SuspendLayout();
			this->TB2->SuspendLayout();
			this->SuspendLayout();
			// 
			// TB
			// 
			this->TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->TB->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->TB->ColumnCount = 2;
			this->TB->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB->Controls->Add(this->MSG4, 1, 1);
			this->TB->Controls->Add(this->MSG3, 0, 1);
			this->TB->Controls->Add(this->MSG2, 1, 0);
			this->TB->Controls->Add(this->MSG1, 0, 0);
			this->TB->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB->Location = System::Drawing::Point(12, 308);
			this->TB->Name = L"TB";
			this->TB->RowCount = 2;
			this->TB->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB->Size = System::Drawing::Size(460, 101);
			this->TB->TabIndex = 0;
			// 
			// MSG4
			// 
			this->MSG4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MSG4->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->MSG4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MSG4->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->MSG4->Location = System::Drawing::Point(234, 54);
			this->MSG4->Name = L"MSG4";
			this->MSG4->Size = System::Drawing::Size(221, 41);
			this->MSG4->TabIndex = 3;
			this->MSG4->Text = L"Colored Message";
			this->MSG4->UseVisualStyleBackColor = false;
			this->MSG4->Click += gcnew System::EventHandler(this, &ColoredMSG::MSG4_Click);
			// 
			// MSG3
			// 
			this->MSG3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MSG3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->MSG3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MSG3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->MSG3->Location = System::Drawing::Point(5, 54);
			this->MSG3->Name = L"MSG3";
			this->MSG3->Size = System::Drawing::Size(221, 41);
			this->MSG3->TabIndex = 2;
			this->MSG3->Text = L"Colored Message";
			this->MSG3->UseVisualStyleBackColor = false;
			this->MSG3->Click += gcnew System::EventHandler(this, &ColoredMSG::MSG3_Click);
			// 
			// MSG2
			// 
			this->MSG2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MSG2->BackColor = System::Drawing::Color::IndianRed;
			this->MSG2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MSG2->ForeColor = System::Drawing::Color::Firebrick;
			this->MSG2->Location = System::Drawing::Point(234, 5);
			this->MSG2->Name = L"MSG2";
			this->MSG2->Size = System::Drawing::Size(221, 41);
			this->MSG2->TabIndex = 1;
			this->MSG2->Text = L"Colored Message";
			this->MSG2->UseVisualStyleBackColor = false;
			this->MSG2->Click += gcnew System::EventHandler(this, &ColoredMSG::MSG2_Click);
			// 
			// MSG1
			// 
			this->MSG1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MSG1->BackColor = System::Drawing::Color::PaleGreen;
			this->MSG1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->MSG1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MSG1->ForeColor = System::Drawing::Color::LimeGreen;
			this->MSG1->Location = System::Drawing::Point(5, 5);
			this->MSG1->Name = L"MSG1";
			this->MSG1->Size = System::Drawing::Size(221, 41);
			this->MSG1->TabIndex = 0;
			this->MSG1->Text = L"Colored Message";
			this->MSG1->UseVisualStyleBackColor = false;
			this->MSG1->Click += gcnew System::EventHandler(this, &ColoredMSG::MSG1_Click);
			// 
			// NameIntro
			// 
			this->NameIntro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NameIntro->AutoSize = true;
			this->NameIntro->BackColor = System::Drawing::Color::Transparent;
			this->NameIntro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NameIntro->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameIntro->Location = System::Drawing::Point(17, 9);
			this->NameIntro->Name = L"NameIntro";
			this->NameIntro->Size = System::Drawing::Size(288, 19);
			this->NameIntro->TabIndex = 1;
			this->NameIntro->Text = L"Created By: Roland Z. Regio";
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
			this->FromIntro->Location = System::Drawing::Point(17, 42);
			this->FromIntro->Name = L"FromIntro";
			this->FromIntro->Size = System::Drawing::Size(233, 19);
			this->FromIntro->TabIndex = 2;
			this->FromIntro->Text = L"From: PUPSTB as BSIT 1-1";
			// 
			// MSGwindow
			// 
			this->MSGwindow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MSGwindow->BackColor = System::Drawing::SystemColors::Window;
			this->MSGwindow->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MSGwindow->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MSGwindow->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MSGwindow->Location = System::Drawing::Point(17, 147);
			this->MSGwindow->Name = L"MSGwindow";
			this->MSGwindow->Size = System::Drawing::Size(455, 145);
			this->MSGwindow->TabIndex = 4;
			this->MSGwindow->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MSGwindow->Click += gcnew System::EventHandler(this, &ColoredMSG::MSGinput_Click);
			// 
			// Clear
			// 
			this->Clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Clear->BackColor = System::Drawing::Color::Silver;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->ForeColor = System::Drawing::Color::DimGray;
			this->Clear->Location = System::Drawing::Point(5, 5);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(211, 39);
			this->Clear->TabIndex = 5;
			this->Clear->Text = L"Close Message";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &ColoredMSG::Clear_Click);
			// 
			// TB2
			// 
			this->TB2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TB2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->TB2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->TB2->ColumnCount = 1;
			this->TB2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB2->Controls->Add(this->Clear, 0, 0);
			this->TB2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB2->Location = System::Drawing::Point(133, 409);
			this->TB2->Name = L"TB2";
			this->TB2->RowCount = 1;
			this->TB2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->TB2->Size = System::Drawing::Size(221, 49);
			this->TB2->TabIndex = 6;
			// 
			// TitleBar
			// 
			this->TitleBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleBar->Font = (gcnew System::Drawing::Font(L"Castellar", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleBar->Location = System::Drawing::Point(17, 97);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(455, 41);
			this->TitleBar->TabIndex = 7;
			this->TitleBar->Text = L"COLORED MESSAGE PROGRAM";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->TitleBar->Click += gcnew System::EventHandler(this, &ColoredMSG::TitleBar_Click);
			// 
			// ColoredMSG
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(484, 527);
			this->Controls->Add(this->TitleBar);
			this->Controls->Add(this->TB2);
			this->Controls->Add(this->MSGwindow);
			this->Controls->Add(this->TB);
			this->Controls->Add(this->FromIntro);
			this->Controls->Add(this->NameIntro);
			this->MinimumSize = System::Drawing::Size(500, 565);
			this->Name = L"ColoredMSG";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Colored Message Program";
			this->Load += gcnew System::EventHandler(this, &ColoredMSG::ColoredMSG_Load);
			this->TB->ResumeLayout(false);
			this->TB2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void MSG1_Click(System::Object^ sender, System::EventArgs^ e) {
		MSGwindow -> Text = "Don't say you can't until you prove you can't.\r\n-LES PAUL";
		MSGwindow -> BackColor = System::Drawing::Color::PaleGreen;
		MSGwindow -> ForeColor = System::Drawing::Color::LimeGreen;
		Form^ ColoredMSG = MSG1->FindForm();
		ColoredMSG->BackColor = Color::LimeGreen;
	}
	private: System::Void MSG2_Click(System::Object^ sender, System::EventArgs^ e) {
		MSGwindow -> Text = "If you change the way you look at things,\r\nthe things you look at change.\r\n-WAYNE DYER";
		MSGwindow->BackColor = System::Drawing::Color::IndianRed;
		MSGwindow->ForeColor = System::Drawing::Color::Firebrick;
		Form^ ColoredMSG = MSG2->FindForm();
		ColoredMSG->BackColor = Color::Firebrick;
	}
	private: System::Void MSG3_Click(System::Object^ sender, System::EventArgs^ e) {
		MSGwindow -> Text = "The way I see it,\r\nIf you want the rainbow,\r\nyou gotta put up with the rain.\r\n-DOLLY PARTON";
		MSGwindow->BackColor = System::Drawing::Color::LightSteelBlue;
		MSGwindow->ForeColor = System::Drawing::Color::RoyalBlue;
		Form^ ColoredMSG = MSG3->FindForm();
		ColoredMSG->BackColor = Color::RoyalBlue;
	}
	private: System::Void MSG4_Click(System::Object^ sender, System::EventArgs^ e) {
		MSGwindow -> Text = "You will face many defeats in life,\r\nbut never let yourself be defeated.\r\n-MAYA ANGELOU";
		MSGwindow->BackColor = System::Drawing::Color::PaleGoldenrod;
		MSGwindow->ForeColor = System::Drawing::Color::DarkGoldenrod;
		Form^ ColoredMSG = MSG1->FindForm();
		ColoredMSG->BackColor = Color::DarkGoldenrod;
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		MSGwindow -> Text = "";
		MSGwindow->BackColor = System::Drawing::Color::White;
		Form^ ColoredMSG = Clear->FindForm();
		ColoredMSG->BackColor = Color:: LightGray;
	}
	private: System::Void ColoredMSG_Load(System::Object^ sender, System::EventArgs^ e) {
		MSGwindow->Text = "";
	}
	private: System::Void MSGinput_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TitleBar_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
