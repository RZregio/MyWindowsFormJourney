#include "Passwrd.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array <String^>^ args)

{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	PASSWRD::Passwrd form;
	Application::Run(% form);
}



