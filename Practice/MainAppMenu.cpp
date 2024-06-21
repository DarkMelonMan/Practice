#include "MainAppMenu.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Practice::MainAppMenu form;
	Application::Run(% form);
}