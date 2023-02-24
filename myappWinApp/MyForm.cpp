#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]


int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);//pentru scriere 3
	Application::EnableVisualStyles();
	myappWinApp::MyForm form;
	Application::Run(% form);


}

