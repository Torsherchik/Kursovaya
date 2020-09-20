#include "SimEnigma.h"
#include <Windows.h>
using namespace Enigma1; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew SimEnigma);
	return 0;
}