#pragma once
#include<conio.h>
#include<math.h>  
#define PI 3.141592653589793238
double ans2, a2, b2, c2;
int flag2 = 0;
using namespace std;
namespace CalC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Geo
	/// </summary>
	public ref class Geo : public System::Windows::Forms::Form
	{
	public:
		Form^ home;
		Geo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Geo(Form^ geo)
		{
			home = geo;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Geo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ TitleBar;
	private: System::Windows::Forms::Button^ Out;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ HB;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;







	private: System::Windows::Forms::TextBox^ Res2;



	private: System::Windows::Forms::Button^ del2;

	private: System::Windows::Forms::Button^ Eq2;
	private: System::Windows::Forms::Button^ GeoHelp;
	private: System::Windows::Forms::Label^ Area;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ InputA2;
	private: System::Windows::Forms::TextBox^ InputB2;
	private: System::Windows::Forms::Label^ N1;
	private: System::Windows::Forms::Label^ N2;
	private: System::Windows::Forms::TextBox^ InputC2;
	private: System::Windows::Forms::Label^ N3;
	private: System::Windows::Forms::ComboBox^ GeoFigure;
	private: System::Windows::Forms::Label^ Select1;
	private: System::Windows::Forms::Label^ Geomula;
	private: System::Windows::Forms::Label^ Geomula1;
	private: System::Windows::Forms::Button^ In;



















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Geo::typeid));
			this->TitleBar = (gcnew System::Windows::Forms::Label());
			this->Out = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->In = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->HB = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Res2 = (gcnew System::Windows::Forms::TextBox());
			this->del2 = (gcnew System::Windows::Forms::Button());
			this->Eq2 = (gcnew System::Windows::Forms::Button());
			this->GeoHelp = (gcnew System::Windows::Forms::Button());
			this->Area = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->InputA2 = (gcnew System::Windows::Forms::TextBox());
			this->InputB2 = (gcnew System::Windows::Forms::TextBox());
			this->N1 = (gcnew System::Windows::Forms::Label());
			this->N2 = (gcnew System::Windows::Forms::Label());
			this->InputC2 = (gcnew System::Windows::Forms::TextBox());
			this->N3 = (gcnew System::Windows::Forms::Label());
			this->GeoFigure = (gcnew System::Windows::Forms::ComboBox());
			this->Select1 = (gcnew System::Windows::Forms::Label());
			this->Geomula = (gcnew System::Windows::Forms::Label());
			this->Geomula1 = (gcnew System::Windows::Forms::Label());
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
			this->TitleBar->Location = System::Drawing::Point(209, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(246, 51);
			this->TitleBar->TabIndex = 107;
			this->TitleBar->Text = L"CMATHings ™";
			this->TitleBar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Out
			// 
			this->Out->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Out->BackColor = System::Drawing::Color::Transparent;
			this->Out->FlatAppearance->BorderSize = 0;
			this->Out->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Out->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->Out->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Out->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Out->ForeColor = System::Drawing::Color::White;
			this->Out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Out.Image")));
			this->Out->Location = System::Drawing::Point(7, 10);
			this->Out->Name = L"Out";
			this->Out->Size = System::Drawing::Size(45, 41);
			this->Out->TabIndex = 106;
			this->Out->UseVisualStyleBackColor = false;
			this->Out->Click += gcnew System::EventHandler(this, &Geo::Out_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->In);
			this->panel1->Controls->Add(this->TitleBar);
			this->panel1->Controls->Add(this->Out);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->HB);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 61);
			this->panel1->TabIndex = 142;
			// 
			// In
			// 
			this->In->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->In->BackColor = System::Drawing::Color::Transparent;
			this->In->FlatAppearance->BorderSize = 0;
			this->In->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->In->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->In->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->In->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->In->ForeColor = System::Drawing::Color::White;
			this->In->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"In.Image")));
			this->In->Location = System::Drawing::Point(109, 3);
			this->In->Name = L"In";
			this->In->Size = System::Drawing::Size(45, 46);
			this->In->TabIndex = 108;
			this->In->UseVisualStyleBackColor = false;
			this->In->Visible = false;
			this->In->Click += gcnew System::EventHandler(this, &Geo::In_Click);
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
			this->HB->Click += gcnew System::EventHandler(this, &Geo::HB_Click);
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
			this->button3->Click += gcnew System::EventHandler(this, &Geo::button3_Click);
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
			this->button1->Click += gcnew System::EventHandler(this, &Geo::button1_Click);
			// 
			// Res2
			// 
			this->Res2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Res2->BackColor = System::Drawing::Color::Silver;
			this->Res2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Res2->Location = System::Drawing::Point(117, 361);
			this->Res2->Multiline = true;
			this->Res2->Name = L"Res2";
			this->Res2->Size = System::Drawing::Size(374, 158);
			this->Res2->TabIndex = 154;
			this->Res2->TextChanged += gcnew System::EventHandler(this, &Geo::Res2_TextChanged);
			// 
			// del2
			// 
			this->del2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->del2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->del2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del2->ForeColor = System::Drawing::Color::White;
			this->del2->Location = System::Drawing::Point(497, 361);
			this->del2->Name = L"del2";
			this->del2->Size = System::Drawing::Size(85, 56);
			this->del2->TabIndex = 151;
			this->del2->Text = L"CE";
			this->del2->UseVisualStyleBackColor = false;
			this->del2->Click += gcnew System::EventHandler(this, &Geo::del2_Click);
			// 
			// Eq2
			// 
			this->Eq2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Eq2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Eq2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eq2->ForeColor = System::Drawing::Color::White;
			this->Eq2->Location = System::Drawing::Point(497, 423);
			this->Eq2->Name = L"Eq2";
			this->Eq2->Size = System::Drawing::Size(85, 96);
			this->Eq2->TabIndex = 150;
			this->Eq2->Text = L"=";
			this->Eq2->UseVisualStyleBackColor = false;
			this->Eq2->Click += gcnew System::EventHandler(this, &Geo::Eq2_Click);
			// 
			// GeoHelp
			// 
			this->GeoHelp->BackColor = System::Drawing::Color::Transparent;
			this->GeoHelp->FlatAppearance->BorderSize = 0;
			this->GeoHelp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->GeoHelp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->GeoHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GeoHelp->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GeoHelp->Location = System::Drawing::Point(615, 67);
			this->GeoHelp->Name = L"GeoHelp";
			this->GeoHelp->Size = System::Drawing::Size(39, 47);
			this->GeoHelp->TabIndex = 163;
			this->GeoHelp->Text = L"\?";
			this->GeoHelp->UseVisualStyleBackColor = false;
			this->GeoHelp->Click += gcnew System::EventHandler(this, &Geo::GeoHelp_Click);
			// 
			// Area
			// 
			this->Area->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Area->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Area->Location = System::Drawing::Point(0, 368);
			this->Area->Name = L"Area";
			this->Area->Size = System::Drawing::Size(115, 151);
			this->Area->TabIndex = 164;
			this->Area->Text = L"AREA =";
			this->Area->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Area->Click += gcnew System::EventHandler(this, &Geo::Area_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(146, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(371, 51);
			this->label2->TabIndex = 145;
			this->label2->Text = L"Geometric Area Solver";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// InputA2
			// 
			this->InputA2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputA2->BackColor = System::Drawing::Color::Silver;
			this->InputA2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputA2->Location = System::Drawing::Point(117, 191);
			this->InputA2->Multiline = true;
			this->InputA2->Name = L"InputA2";
			this->InputA2->Size = System::Drawing::Size(459, 41);
			this->InputA2->TabIndex = 152;
			this->InputA2->Visible = false;
			this->InputA2->TextChanged += gcnew System::EventHandler(this, &Geo::InputA2_TextChanged);
			// 
			// InputB2
			// 
			this->InputB2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputB2->BackColor = System::Drawing::Color::Silver;
			this->InputB2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputB2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->InputB2->Location = System::Drawing::Point(117, 247);
			this->InputB2->Multiline = true;
			this->InputB2->Name = L"InputB2";
			this->InputB2->Size = System::Drawing::Size(459, 42);
			this->InputB2->TabIndex = 153;
			this->InputB2->Visible = false;
			this->InputB2->TextChanged += gcnew System::EventHandler(this, &Geo::InputB2_TextChanged);
			// 
			// N1
			// 
			this->N1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->N1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N1->Location = System::Drawing::Point(12, 191);
			this->N1->Name = L"N1";
			this->N1->Size = System::Drawing::Size(99, 41);
			this->N1->TabIndex = 155;
			this->N1->Text = L"A";
			this->N1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->N1->Visible = false;
			this->N1->Click += gcnew System::EventHandler(this, &Geo::N1_Click);
			// 
			// N2
			// 
			this->N2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->N2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N2->Location = System::Drawing::Point(8, 247);
			this->N2->Name = L"N2";
			this->N2->Size = System::Drawing::Size(103, 42);
			this->N2->TabIndex = 156;
			this->N2->Text = L"B";
			this->N2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->N2->Visible = false;
			this->N2->Click += gcnew System::EventHandler(this, &Geo::N2_Click);
			// 
			// InputC2
			// 
			this->InputC2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputC2->BackColor = System::Drawing::Color::Silver;
			this->InputC2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputC2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->InputC2->Location = System::Drawing::Point(117, 304);
			this->InputC2->Multiline = true;
			this->InputC2->Name = L"InputC2";
			this->InputC2->Size = System::Drawing::Size(459, 42);
			this->InputC2->TabIndex = 157;
			this->InputC2->Visible = false;
			this->InputC2->TextChanged += gcnew System::EventHandler(this, &Geo::InputC2_TextChanged);
			// 
			// N3
			// 
			this->N3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->N3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N3->Location = System::Drawing::Point(8, 289);
			this->N3->Name = L"N3";
			this->N3->Size = System::Drawing::Size(103, 79);
			this->N3->TabIndex = 158;
			this->N3->Text = L"C";
			this->N3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->N3->Visible = false;
			this->N3->Click += gcnew System::EventHandler(this, &Geo::N3_Click);
			// 
			// GeoFigure
			// 
			this->GeoFigure->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GeoFigure->BackColor = System::Drawing::Color::Silver;
			this->GeoFigure->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GeoFigure->FormattingEnabled = true;
			this->GeoFigure->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"AREA OF CIRCLE", L"AREA OF TRIANGLE", L"AREA OF RECTANGLE",
					L"AREA OF SQUARE", L"AREA OF TRAPEZOID", L"AREA OF ELLIPSE"
			});
			this->GeoFigure->Location = System::Drawing::Point(255, 146);
			this->GeoFigure->Name = L"GeoFigure";
			this->GeoFigure->Size = System::Drawing::Size(281, 27);
			this->GeoFigure->TabIndex = 159;
			this->GeoFigure->SelectedIndexChanged += gcnew System::EventHandler(this, &Geo::GeoFigure_SelectedIndexChanged);
			// 
			// Select1
			// 
			this->Select1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Select1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select1->Location = System::Drawing::Point(117, 146);
			this->Select1->Name = L"Select1";
			this->Select1->Size = System::Drawing::Size(132, 27);
			this->Select1->TabIndex = 160;
			this->Select1->Text = L"Select Figure:";
			this->Select1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Geomula
			// 
			this->Geomula->BackColor = System::Drawing::Color::Gray;
			this->Geomula->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Geomula->Location = System::Drawing::Point(16, 140);
			this->Geomula->Name = L"Geomula";
			this->Geomula->Size = System::Drawing::Size(566, 149);
			this->Geomula->TabIndex = 165;
			this->Geomula->Text = resources->GetString(L"Geomula.Text");
			this->Geomula->Visible = false;
			this->Geomula->Click += gcnew System::EventHandler(this, &Geo::Geomula_Click);
			// 
			// Geomula1
			// 
			this->Geomula1->BackColor = System::Drawing::Color::Gray;
			this->Geomula1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Geomula1->Location = System::Drawing::Point(16, 80);
			this->Geomula1->Name = L"Geomula1";
			this->Geomula1->Size = System::Drawing::Size(566, 60);
			this->Geomula1->TabIndex = 166;
			this->Geomula1->Text = L"AREA FORMULAE FOR GEOMETRICAL FIGURES\r\nGEOMETRICAL FIGURE          FORMULA";
			this->Geomula1->Visible = false;
			this->Geomula1->Click += gcnew System::EventHandler(this, &Geo::Geomula1_Click);
			// 
			// Geo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(666, 550);
			this->Controls->Add(this->Geomula1);
			this->Controls->Add(this->Geomula);
			this->Controls->Add(this->Area);
			this->Controls->Add(this->GeoHelp);
			this->Controls->Add(this->Select1);
			this->Controls->Add(this->GeoFigure);
			this->Controls->Add(this->N3);
			this->Controls->Add(this->InputC2);
			this->Controls->Add(this->N2);
			this->Controls->Add(this->N1);
			this->Controls->Add(this->Res2);
			this->Controls->Add(this->InputB2);
			this->Controls->Add(this->InputA2);
			this->Controls->Add(this->del2);
			this->Controls->Add(this->Eq2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(666, 550);
			this->MinimumSize = System::Drawing::Size(666, 550);
			this->Name = L"Geo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Geo";
			this->Load += gcnew System::EventHandler(this, &Geo::Geo_Load);
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
	private: System::Void del2_Click(System::Object^ sender, System::EventArgs^ e) {
		Res2->Clear();
		InputA2->Clear();
		InputB2->Clear();
		InputC2->Clear();
		GeoFigure->Text = "";
	}
	private: System::Void GeoHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("1. Choose a figure\n2. Enter the Required Values\n3. Choose the Figure again\n4. Click Equal Sign for the output\n5. Repeat");
	}
	private: System::Void GeoFigure_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (GeoFigure->SelectedItem->ToString() == "AREA OF CIRCLE")
		{
			InputA2->Visible = true;
			InputB2->Visible = false;
			InputC2->Visible = false;
			N1->Visible = true;
			N2->Visible = false;
			N3->Visible = false;
			N1->Text = "Radius:";
			if (InputA2->Text != "")
			{
				flag2 = 1;
				a2 = double::Parse(InputA2->Text);
			}
		}
		if (GeoFigure->SelectedItem->ToString() == "AREA OF TRIANGLE")
		{
			InputA2->Visible = true;
			InputB2->Visible = true;
			InputC2->Visible = false;
			N1->Visible = true;
			N2->Visible = true;
			N3->Visible = false;
			N1->Text = "Base:";
			N2->Text = "Height:";
			if (InputA2->Text != "" && InputB2->Text != "")
			{
				flag2 = 2;
				a2 = double::Parse(InputA2->Text);
				b2 = double::Parse(InputB2->Text);
			}
		}
		if (GeoFigure->SelectedItem->ToString() == "AREA OF RECTANGLE")
		{
			InputA2->Visible = true;
			InputB2->Visible = true;
			InputC2->Visible = false;
			N1->Visible = true;
			N2->Visible = true;
			N3->Visible = false;
			N1->Text = "Length:";
			N2->Text = "Width:";
			if (InputA2->Text != "" && InputB2->Text != "")
			{
				flag2 = 3;
				a2 = double::Parse(InputA2->Text);
				b2 = double::Parse(InputB2->Text);
			}
		}
		if (GeoFigure->SelectedItem->ToString() == "AREA OF SQUARE")
		{
			InputA2->Visible = true;
			InputB2->Visible = false;
			InputC2->Visible = false;
			N1->Visible = true;
			N2->Visible = false;
			N3->Visible = false;
			N1->Text = "Side:";
			if (InputA2->Text != "")
			{
				flag2 = 4;
				a2 = double::Parse(InputA2->Text);
			}
		}
		if (GeoFigure->SelectedItem->ToString() == "AREA OF TRAPEZOID")
		{
			InputA2->Visible = true;
			InputB2->Visible = true;
			InputC2->Visible = true;
			N1->Visible = true;
			N2->Visible = true;
			N3->Visible = true;
			N1->Text = "Base1:";
			N2->Text = "Base2:";
			N3->Text = "Vertical Height:";
			if (InputA2->Text != "" && InputB2->Text != "" && InputC2->Text != "")
			{
				flag2 = 5;
				a2 = double::Parse(InputA2->Text);
				b2 = double::Parse(InputB2->Text);
				c2 = double::Parse(InputC2->Text);
			}
		}
		if (GeoFigure->SelectedItem->ToString() == "AREA OF ELLIPSE")
		{
			InputA2->Visible = true;
			InputB2->Visible = true;
			InputC2->Visible = false;
			N1->Visible = true;
			N2->Visible = true;
			N3->Visible = false;
			N1->Text = "MajorA:";
			N2->Text = "MinorA:";
			if (InputA2->Text != "" && InputB2->Text != "")
			{
				flag2 = 6;
				a2 = double::Parse(InputA2->Text);
				b2 = double::Parse(InputB2->Text);
			}
		}
	}
	private: System::Void Eq2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (GeoFigure->Text == "")
		{
			MessageBox::Show("Choose a Figure");
			Res2->Text = "";
		}
		if (flag2 == 1)
		{
			ans2 = PI * a2 * a2;
			Res2->Text = Convert::ToString(ans2);
		}
		else if (flag2 == 2)
		{
			ans2 = a2 * b2 * 0.5;
			Res2->Text = Convert::ToString(ans2);
		}
		else if (flag2 == 3)
		{
			ans2 = a2 * b2;
			Res2->Text = Convert::ToString(ans2);
		}
		else if (flag2 == 4)
		{
			ans2 = a2 * a2;
			Res2->Text = Convert::ToString(ans2);
		}
		else if (flag2 == 5)
		{
			ans2 = (a2 + b2) * 0.5 * c2;
			Res2->Text = Convert::ToString(ans2);
		}
		else if (flag2 == 6)
		{
			ans2 = PI * a2 * b2;
			Res2->Text = Convert::ToString(ans2);
		}
	}
	private: System::Void InputA2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InputB2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InputC2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Res2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void N1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void N2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void N3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Geo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Area_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Geomula1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Out_Click(System::Object^ sender, System::EventArgs^ e) {
		Geomula->Visible = true;
		Geomula1->Visible = true;
		Out->Visible = false;
		In->Visible = true;
		In->Location = Out->Location;
	}
	private: System::Void In_Click(System::Object^ sender, System::EventArgs^ e) {
		Geomula->Visible = false;
		Geomula1->Visible = false;
		Out->Visible = true;
		In->Visible = false;
		In->Location = Out->Location;
	}
private: System::Void Geomula_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
