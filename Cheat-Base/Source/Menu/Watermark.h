#pragma once
#include <iostream>
#include <chrono>  // Include the necessary header for the timer
#include "../../Dependencies/imgui/imgui.h"
#include "../GameData/GameData.h"
#include "../SDK/Source2/SchemaSystem.h"

class Watermark {
public:
    void WaterMark() {
        static ImVec2 watermarkWindowPos = ImVec2(0, 0);
        static std::chrono::time_point<std::chrono::steady_clock> lastFrameTime;
        static int frameCount = 0;

        // Calculate the position for the watermark window
        const ImGuiViewport* main_viewport = ImGui::GetMainViewport();
        watermarkWindowPos = ImVec2(main_viewport->WorkPos.x + main_viewport->WorkSize.x - 200, main_viewport->WorkPos.y + 10);

        // Measure the time elapsed since the last frame
        auto currentTime = std::chrono::steady_clock::now();
        std::chrono::duration<float> deltaTime = currentTime - lastFrameTime;
        lastFrameTime = currentTime;

        // Update the frame count and FPS
        frameCount++;
        int fps = static_cast<int>(1.0f / deltaTime.count());

        // Render the watermark window
        ImGui::SetNextWindowPos(watermarkWindowPos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(ImVec2(150, 25), ImGuiCond_Always);
        ImGui::Begin("Watermark", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize);

        // Center the text vertically within the window
        ImGui::SetCursorPosY((ImGui::GetWindowHeight() - ImGui::GetTextLineHeight()) * 0.5f);
        ImGui::Text("Uroboros | %e | FPS: %d ", fps);
        ImGui::End();
    }
};
