#include "Gui.h"

#include <thread>

int __stdcall wWinMain(
	HINSTANCE instance,
	HINSTANCE previuosInstance,
	PWSTR arguments,
	int commandShow)
{
	// Create GUI
	gui::CreateHWindow("Mayhem Hub", "Cheat Menu Class");
	gui::CreateDevice();
	gui::CreateImGui();

	while (gui::exit)
	{
		gui::BeginRender();
		gui::Render();
		gui::EndRender();

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	// Destroy GUI
	gui::DestroyImGui();
	gui::DestroyDevice();
	gui::DestroyHWindow();


	return EXIT_SUCCESS;
}
