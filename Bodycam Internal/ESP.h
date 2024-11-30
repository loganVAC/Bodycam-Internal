#pragma once
#include "includes.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"
#include "Vector.h"
#include <array>
#include "globals.h"


// Constants
constexpr Vec2 ScreenCenter{ 2560 / 2, 1440 / 2 };
constexpr float PI{ 3.14159265359f };

namespace ESP {
	// Helper Function for drawing shit cause how else we supposed to see the shit
	inline void DrawWithOutline(std::function<void()> drawFunc, float outlineThickness, ImColor outlineColor)
	{
		if (outlineThickness > 0.f)
		{
			ImGui::PushStyleVar(ImGuiStyleVar_Alpha, 0.5f); //this is optional im pretty sure but if u dont do this u cant see the line?
		}
	}
}