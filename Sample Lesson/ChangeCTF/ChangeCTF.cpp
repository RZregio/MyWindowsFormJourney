#include "ChangeCTF.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ChangeCTF::ChangeCTF form;
	Application::Run(% form);
}

