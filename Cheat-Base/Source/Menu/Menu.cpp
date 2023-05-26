#include "Menu.h"

#include "../../Dependencies/imgui/imgui.h"
#include "../../Dependencies/imgui/imgui_stdlib.h"

#include "../../Resources/RobotoFont.h"

#include "../Config/Config.h"
#include "../SDK/Utils.h"
#include "../SDK/Helpers.h"

#include "MenuTheme.h"
#include "../Memory/Memory.h"

Menu::Menu() noexcept {
    ImGui::CreateContext();

    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = io.LogFilename = nullptr;
    io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;

    ImFontConfig cfg;
    cfg.OversampleV = 3;
    cfg.FontDataOwnedByAtlas = false;

    ImFontConfig icons_config;
    icons_config.MergeMode = true;
    icons_config.PixelSnapH = true;
    fonts.roboto = io.Fonts->AddFontFromMemoryTTF(&Medium, 168644, 15.0f, &cfg, Helpers::getFontGlyphRanges());
    icons_config.GlyphMinAdvanceX = 13.0f;
    icons_config.GlyphMaxAdvanceX = 13.0f;
}

void renderConfigWindow() {
    static int currentConfig = -1;
    static std::string buffer;

    auto& configItems = config->getConfigs();

    if (static_cast<std::size_t>(currentConfig) >= configItems.size())
        currentConfig = -1;

    ImGui::PushItemWidth(-1);
    if (ImGui::InputTextWithHint("##configname", "config name", &buffer, ImGuiInputTextFlags_EnterReturnsTrue)) {
        if (currentConfig != -1)
            config->rename(currentConfig, buffer.c_str());
    }

    if (ImGui::ListBox("##listbox", &currentConfig, [](void* data, int idx, const char** out_text) {
        auto& vector = *static_cast<std::vector<std::string>*>(data);
        *out_text = vector[idx].c_str();
        return true;
        }, &configItems, configItems.size(), 5) && currentConfig != -1)
    {
        buffer = configItems[currentConfig];
    }

    if (ImGui::Button("Create config", { -1, 25.0f }) && !buffer.empty()) {
        config->add(buffer.c_str());
        buffer.clear();
    }

    if (ImGui::Button("Load", { -1, 25.0f }) && currentConfig != -1)
        config->load(currentConfig);

    if (ImGui::Button("Save", { -1, 25.0f }) && currentConfig != -1)
        config->save(currentConfig);

    if (ImGui::Button("Delete", { -1, 25.0f }) && currentConfig != -1) {
        config->remove(currentConfig);
        if (static_cast<std::size_t>(currentConfig) < configItems.size())
            buffer = configItems[currentConfig];
        else
            buffer.clear();
    }
    ImGui::PopItemWidth();
}

//void renderEnemyESPWindow() {
//    static std::string buffer;
//    //bool temenESP = false;// &config->enemyEsp.eBox
//
//    ImGui::Text("Enemy ESP");
//    ImGui::Checkbox("Boxes", &config->enemyEsp.eBox);
//    ImGui::Checkbox("HealthBar", &config->enemyEsp.eHealthbar);
//    ImGui::Checkbox("Health", &config->enemyEsp.eHealth);
//    ImGui::Checkbox("Name", &config->enemyEsp.eName);
//}

void renderTeamESPWindow() {
    static std::string buffer;
    //ImGui::Text("Team ESP");
    //ImGui::Checkbox("Enable ESP", &config->teamEsp.tEnable);
    //ImGui::Checkbox("Boxes", &config->teamEsp.tBox);
    //ImGui::Checkbox("HealthBar", &config->teamEsp.tHealthBar);
    //ImGui::Checkbox("Health", &config->teamEsp.tHealth);
    //ImGui::Checkbox("Name", &config->teamEsp.tName);

}

void Menu::render() noexcept {
    MenuTheme();

    if (!open)
        return;

    // Set Menu Size
    const ImGuiViewport* main_viewport = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(ImVec2(main_viewport->WorkPos.x + 650, main_viewport->WorkPos.y + 20), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(550, 480), ImGuiCond_FirstUseEver);

    // ImGui Window
    ImGui::Begin("Uroboros", &open, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoResize); //
    {

        if (ImGui::BeginTabBar("Uroboros - Tabs"))
        {
            // Tab 1: ESP
            if (ImGui::BeginTabItem("ESP")) {

                ImGui::Checkbox("Enable ESP", &config->enableESP.enableEsp);

                ImGui::Text("Team ESP");
                ImGui::Checkbox("Team Boxes", &config->teamEsp.tBox);
                ImGui::Checkbox("Team HealthBar", &config->teamEsp.tHealthBar);
                ImGui::Checkbox("Team Health", &config->teamEsp.tHealth);
                ImGui::Checkbox("Team Names", &config->teamEsp.tName);

                ImGui::Text("Enemy ESP");
                ImGui::Checkbox("Enemy Boxes", &config->enemyEsp.eBox);
                ImGui::Checkbox("Enemy HealthBar", &config->enemyEsp.eHealthbar);
                ImGui::Checkbox("Enemy Health", &config->enemyEsp.eHealth);
                ImGui::Checkbox("Enemy Names", &config->enemyEsp.eName);
                
                ImGui::EndTabItem();
            }

            // Tab 2: MISC
            if (ImGui::BeginTabItem("MISC")) {
                ImGui::Text("MISC");
                ImGui::Checkbox("Bunny Hop", &config->misc.bunnyHop);
                ImGui::Checkbox("Crosshair", &config->misc.customCrosshair);
                ImGui::EndTabItem();
            }

            // Tab 3: Config
            if (ImGui::BeginTabItem("Config")) {

                ImGui::Columns(2, nullptr, false);
                {
                    ImGui::Spacing();
                }
                ImGui::NextColumn();
                {
                    renderConfigWindow();
                }
                ImGui::Columns(1);
                ImGui::EndTabItem();
            }

            ImGui::EndTabBar();
        }

        ImGui::End();
    }
}