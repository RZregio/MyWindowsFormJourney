#include "ComGrade.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array <String^>^ args)

{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	ComGrade::ComGrade form;
	Application::Run(% form);
}





