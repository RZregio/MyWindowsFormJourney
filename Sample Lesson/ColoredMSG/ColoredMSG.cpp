#include "ColoredMSG.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ColoredMSG::ColoredMSG form;
	Application::Run(% form);
}
