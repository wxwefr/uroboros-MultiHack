#include "noScope.h"

#include "../../Dependencies/imgui/imgui.h"

#include "../Config/Config.h"
#include "../Interfaces.h"

#include "../SDK/Source2/EngineClient.h"

void noScope::NoScopeCrosshair(ImDrawList* drawList)
{
	if (!config->misc.customCrosshair)
		return;

	if (!interfaces->engineClient->isInGame())
		return;

	auto screenSize = ImGui::GetIO().DisplaySize;

	drawList->AddLine(ImVec2(screenSize.x / 2 - 10, screenSize.y / 2), ImVec2(screenSize.x / 2, screenSize.y / 2), ImU32(ImColor(1.0f, 0.0f, 0.0f, 1.0f)));
	drawList->AddLine(ImVec2(screenSize.x / 2, screenSize.y / 2), ImVec2(screenSize.x / 2 + 10, screenSize.y / 2), ImU32(ImColor(1.0f, 0.0f, 0.0f, 1.0f)));
	
	drawList->AddLine(ImVec2(screenSize.x / 2, screenSize.y / 2 - 10), ImVec2(screenSize.x / 2, screenSize.y / 2), ImU32(ImColor(1.0f, 0.0f, 0.0f, 1.0f)));
	drawList->AddLine(ImVec2(screenSize.x / 2, screenSize.y / 2 + 10), ImVec2(screenSize.x / 2, screenSize.y / 2), ImU32(ImColor(1.0f, 0.0f, 0.0f, 1.0f)));
}
