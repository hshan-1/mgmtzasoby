#include "form.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace mgmtzasoby;

[STAThreadAttribute]

int Main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	mgmtzasoby::form forma;
	Application::Run(% forma);
	return 0;
}