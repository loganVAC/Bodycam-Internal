#pragma once
#include "includes.h"

inline void DrawMenu()
{
	ImGui::Begin("Bodycam Cheat Made By terrorrism");

	if (ImGui::BeginTabBar("tabs"))
	{
		if (ImGui::BeginTabItem("Aimbot"))
		{
			ImGui::Checkbox("Aimbot", &gl::Aimbot::Aimbot);
			
			if (gl::Aimbot::Aimbot)
			{
				ImGui::Separator();

				ImGui::Checkbox("Show Fov", &gl::Aimbot::ShowFov);
				ImGui::SameLine();
				ImGui::ColorEdit3("##Fov color", (float*)&gl::esp_Colors::FovColor, ImGuiColorEditFlags_NoInputs);
				ImGui::SameLine();
				ImGui::SliderFloat("##Fov Value", &gl::Aimbot::Fov, 0.f, 1000.f);

				ImGui::Text("Pitch Value");
				ImGui::SliderFloat("##Pitch Value", &gl::Aimbot::Pitch, -0.5f, 0.5f);
				ImGui::Checkbox("Aim Line", &gl::Aimbot::AimLine);
				ImGui::SameLine();
				ImGui::ColorEdit3("##Aimline color", (float*)&gl::esp_Colors::AimLine, ImGuiColorEditFlags_NoInputs);
				
				ImGui::Spacing();
			}
			ImGui::Separator();
			ImGui::Spacing();

			ImGui::Checkbox("Instant Kill", &gl::Aimbot::InstantKill);
			ImGui::Checkbox("No Aiming Restrictions", &gl::Aimbot::AimLine);
			ImGui::Checkbox("Instant Aiming", &gl::Aimbot::InstantAiming);

			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Visuals"))
		{
			ImGui::Checkbox("ESP", &gl::ESP::ESP);
			if (gl::ESP::ESP)
			{
				ImGui::Separator();

				ImGui::Checkbox("Visible", &gl::ESP::ESP_Visible);
				ImGui::SameLine();
				ImGui::ColorEdit3("##Visible color", (float*)&gl::esp_Colors::VisibleColor, ImGuiColorEditFlags_NoInputs);

				ImGui::Checkbox("Not Visible", &gl::ESP::ESP_NotVisible);
				ImGui::SameLine();
				ImGui::ColorEdit3("##NotVisible color", (float*)&gl::esp_Colors::NotVisibleColor, ImGuiColorEditFlags_NoInputs);

				ImGui::Checkbox("Snaplines", &gl::ESP::SnapLines);
				ImGui::SameLine();
				ImGui::ColorEdit3("##Snaplines color", (float*)&gl::esp_Colors::SnaplineColor, ImGuiColorEditFlags_NoInputs);
				ImGui::SameLine();
				ImGui::Combo("##SnaplinePosition", &selected_position, snapline_positions, IM_ARRAYSIZE(snapline_positions));

				ImGui::Checkbox("Nickname", &gl::ESP::Nicknames);
				ImGui::SameLine();
				ImGui::ColorEdit3("##Nicknames color", (float*)&gl::esp_Colors::Nickname, ImGuiColorEditFlags_NoInputs);

				ImGui::Checkbox("Health Bar", &gl::ESP::HealthBar);
				ImGui::Checkbox("Team Check", &gl::ESP::TeamCheck);
				ImGui::Spacing();
			}
			ImGui::Separator();
			ImGui::Spacing();

			ImGui::Checkbox("No Flash", &gl::ESP::NoFlash);

			ImGui::Spacing();
			ImGui::Separator();
			ImGui::Spacing();
			ImGui::Text("World");

			ImGui::Checkbox("Drones", &gl::World::Drones);
			ImGui::SameLine();
			ImGui::ColorEdit3("##Drones color", (float*)&gl::esp_Colors::Drones, ImGuiColorEditFlags_NoInputs);

			ImGui::Checkbox("Bomb", &gl::World::Bomb);
			ImGui::SameLine();
			ImGui::ColorEdit3("##Bomb color", (float*)&gl::esp_Colors::Bomb, ImGuiColorEditFlags_NoInputs);

			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Exploits"))
		{
			ImGui::Checkbox("View Fov", &gl::Exploits::Fov);
			ImGui::SameLine();
			ImGui::SliderFloat("##View Fov Value", &gl::Exploits::FovValue, 90.f, 160.f);

			ImGui::Checkbox("Gravity Multiplier", &gl::Exploits::Gravity);
			ImGui::SameLine();
			ImGui::SliderFloat("##Gravity Multiplier Value", &gl::Exploits::GravityValue, -1.f, 3.f);

			ImGui::Checkbox("No Recoil", &gl::Exploits::NoRecoil);

			ImGui::Checkbox("Rapid Fire", &gl::Exploits::RapidFire);
			ImGui::SameLine();
			ImGui::SliderFloat("##Rapid Fire Value", &gl::Exploits::RapidFireValue, 0.f, 1.f);

			ImGui::Checkbox("Full Auto", &gl::Exploits::FullAuto);
			ImGui::Checkbox("Unlimited Ammo", &gl::Exploits::UnlimitedAmmo);
			ImGui::Checkbox("GodMode", &gl::Exploits::GodMode);
			ImGui::SliderInt("##XP Value", &gl::Exploits::xp, 0, 50000);
			ImGui::SameLine();
			if (ImGui::Button("Apply XP"))
				gl::Exploits::xpApply = true;

			ImGui::SliderInt("##Rank Value", &gl::Exploits::killsQuantity, 0, 100);
			ImGui::SameLine();
			if (ImGui::Button("Add Kills"))
				gl::Exploits::addKills = true;

			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Host Options"))
		{
			ImGui::Checkbox("Gravity Multiplier", &gl::HostOptions::Gravity);
			ImGui::SameLine();
			ImGui::SliderFloat("##Gravity Multiplier Value", &gl::HostOptions::GravityValue, -1.f, 3.f);

			ImGui::Checkbox("No Recoil", &gl::HostOptions::NoRecoil);

			ImGui::Checkbox("Rapid Fire", &gl::HostOptions::RapidFire);
			ImGui::SameLine();
			ImGui::SliderFloat("##Rapid Fire Value", &gl::HostOptions::RapidFireValue, 0.f, 1.f);

			ImGui::Checkbox("Full Auto", &gl::HostOptions::FullAuto);
			ImGui::Checkbox("No Damage Bullets", &gl::HostOptions::NoDamageBullets);
			ImGui::Checkbox("Remove Ammo", &gl::HostOptions::RemoveBullets);
			ImGui::Checkbox("Unlimited Ammo", &gl::HostOptions::UnlimitedAmmo);

			ImGui::Checkbox("Crazy Heads", &gl::HostOptions::CrazyHeads);
			ImGui::Checkbox("Kill All players", &gl::HostOptions::KillPlayers);
			ImGui::Checkbox("Kill All players (silent)", &gl::HostOptions::KillPlayersSilent);

			if (ImGui::Button("Finish Game"))
				gl::HostOptions::finishGame = true;

			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Misc"))
		{
			ImGui::Checkbox("Show mouse", &gl::Misc::ShowMouse);
			if (ImGui::Button("Suicide"))
				gl::Misc::Suicide = true;

			ImGui::Checkbox("Hide SteamID In-Game", &gl::Misc::HideSteamId);

			ImGui::Spacing();
			ImGui::Separator();
			ImGui::Spacing();
			ImGui::Spacing();

			ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[1]);
			ImGui::Text("Credits");
			ImGui::PopFont();
			ImGui::Spacing();

			ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[0]);
			ImGui::Text("Developed by TERRORRISM");
			ImGui::PopFont();

			ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[2]);
			ImGui::TextWrapped("-----------------------------------------------------------------------------");
			ImGui::TextWrapped("-----------------------------------------------------------------------------");
			ImGui::TextWrapped("-----------------------------------------------------------------------------");
			
			ImGui::PopFont();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}

	ImGui::End();
}

inline void SetColorsFlags()
{
	ImVec4* colors = ImGui::GetStyle().Colors;

	// Set standard colors inspired by Android 11 style
	colors[ImGuiCol_Text] = ImVec4(0.92f, 0.92f, 0.92f, 1.00f); // Light text color
	colors[ImGuiCol_TextDisabled] = ImVec4(0.6f, 0.6f, 0.6f, 1.00f); // Disabled text
	colors[ImGuiCol_WindowBg] = ImVec4(0.12f, 0.12f, 0.12f, 1.00f); // Dark background for the window
	colors[ImGuiCol_ChildBg] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f); // Child window background
	colors[ImGuiCol_PopupBg] = ImVec4(0.20f, 0.20f, 0.20f, 0.9f); // Popup background
	colors[ImGuiCol_Border] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f); // Border color
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f); // Border shadow color
	colors[ImGuiCol_FrameBg] = ImVec4(0.26f, 0.26f, 0.26f, 1.00f); // Frame background color
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.30f, 0.30f, 0.30f, 1.00f); // Hovered frame background
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.33f, 0.33f, 0.33f, 1.00f); // Active frame background
	colors[ImGuiCol_TitleBg] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f); // Window title background
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.18f, 0.18f, 0.18f, 1.00f); // Active title background
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.12f, 0.12f, 0.12f, 1.00f); // Collapsed title background
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f); // Menu bar background
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f); // Scrollbar background
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.56f, 0.56f, 0.56f, 1.00f); // Scrollbar grab
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.70f, 0.70f, 0.70f, 1.00f); // Hovered scrollbar grab
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.85f, 0.85f, 0.85f, 1.00f); // Active scrollbar grab
	colors[ImGuiCol_CheckMark] = ImVec4(0.35f, 0.92f, 0.35f, 1.00f); // Checkbox mark
	colors[ImGuiCol_SliderGrab] = ImVec4(0.47f, 0.47f, 0.47f, 1.00f); // Slider grab
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.62f, 0.62f, 0.62f, 1.00f); // Active slider grab
	colors[ImGuiCol_Button] = ImVec4(0.42f, 0.42f, 0.42f, 1.00f); // Button background
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.56f, 0.56f, 0.56f, 1.00f); // Hovered button background
	colors[ImGuiCol_ButtonActive] = ImVec4(0.30f, 0.30f, 0.30f, 1.00f); // Active button background
	colors[ImGuiCol_Header] = ImVec4(0.33f, 0.33f, 0.33f, 1.00f); // Header color
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.42f, 0.42f, 0.42f, 1.00f); // Hovered header
	colors[ImGuiCol_HeaderActive] = ImVec4(0.48f, 0.48f, 0.48f, 1.00f); // Active header
	colors[ImGuiCol_Separator] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f); // Separator color
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.60f, 0.60f, 0.60f, 1.00f); // Hovered separator
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.70f, 0.70f, 0.70f, 1.00f); // Active separator
	colors[ImGuiCol_Tab] = ImVec4(0.26f, 0.26f, 0.26f, 1.00f); // Tab background
	colors[ImGuiCol_TabHovered] = ImVec4(0.38f, 0.38f, 0.38f, 1.00f); // Hovered tab
	colors[ImGuiCol_TabActive] = ImVec4(0.46f, 0.46f, 0.46f, 1.00f); // Active tab
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f); // Unfocused tab
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.32f, 0.32f, 0.32f, 1.00f); // Active unfocused tab
	colors[ImGuiCol_PlotLines] = ImVec4(0.70f, 0.70f, 0.70f, 1.00f); // Plot line color
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.80f, 0.80f, 0.20f, 1.00f); // Hovered plot line
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.60f, 0.60f, 0.60f, 1.00f); // Histogram color
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.80f, 0.80f, 0.20f, 1.00f); // Hovered histogram
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 0.25f, 0.25f, 0.55f); // Selected text background

	// Set style properties to enhance the Android 11 feel
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowTitleAlign.x = 0.50f;
	style.WindowPadding = ImVec2(10, 10);
	style.WindowRounding = 10.0f; // Rounded corners for the window
	style.FramePadding = ImVec2(8, 8);
	style.FrameRounding = 6.0f; // Rounded frames for inputs, buttons, etc.
	style.ItemSpacing = ImVec2(12, 8);
	style.ItemInnerSpacing = ImVec2(8, 6);
	style.IndentSpacing = 20.0f;
	style.ScrollbarSize = 12.0f; // Smaller scrollbar
	style.ScrollbarRounding = 8.0f; // Rounded scrollbar edges
	style.GrabMinSize = 20.0f;
	style.GrabRounding = 6.0f; // Rounded grab handles
	style.TabRounding = 6.0f; // Rounded tabs
	style.Alpha = 1.0f; // Full opacity for UI elements
}
