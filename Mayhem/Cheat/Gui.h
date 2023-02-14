#pragma once
#include <d3d9.h>

namespace gui
{
	// Constant windows size
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true;

	// Winapi window vars
	inline HWND window = nullptr;
	inline WNDCLASSEXA windowClass = { };

	// Points for window movement
	inline POINTS position = { };

	// Direct X state vars
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	// Handle window creation & destruction
	void CreateHWindow(
		const char* windowName,
		const char* className) noexcept;
	void DestroyHWindow() noexcept;

	// Handle Device creation & destruction
	bool CreateDevice() noexcept;
	bool ResetDevice() noexcept;
	bool DestroyDevice() noexcept;

	// Handle ImGui creation & destruction
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}
