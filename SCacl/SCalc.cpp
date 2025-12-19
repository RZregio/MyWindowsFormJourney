#include "SCalc.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array <String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	SCacl::SCalc form;
	Application::Run(% form);
}
