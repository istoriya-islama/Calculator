#include "MyForm.h"
#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array < String^>^ num) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	calculator282::MyForm form;
	calculator282::MyForm1 form1;
	Application::Run(% form);
}