#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text::RegularExpressions;

[STAThreadAttribute]
void Main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TesteForm::MyForm form;
	Application::Run(%form);
}

