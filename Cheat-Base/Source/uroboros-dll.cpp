#include <Windows.h>

#include "../Dependencies/kiero/kiero.h"

#include "Hooks/Hooks.h"
#include "../Dependencies/imgui/imgui.h"
#include "../Dependencies/imgui/imgui_internal.h"

VOID WINAPI OnAttach();

void MainThread(HMODULE moduleHandle) {

    while (!GetAsyncKeyState(VK_END)) {
        // Perform your cheat logic here
    }

    // Detach process
    FreeLibraryAndExitThread(moduleHandle, 0);
}

BOOL APIENTRY DllMain(HMODULE moduleHandle, DWORD reason, LPVOID reserved)
{
    switch (reason) {
    case DLL_PROCESS_ATTACH:
        AllocConsole();
        FILE* consoleStream;
        if (freopen_s(&consoleStream, "CONOUT$", "w", stdout) != 0) {
            printf("Error: Failed to redirect stdout to console.\n");
            // Additional error handling or cleanup code can be added here
        }

        DisableThreadLibraryCalls(moduleHandle);
        CreateThread(NULL, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(OnAttach), NULL, 0, NULL);
        break;

    case DLL_PROCESS_DETACH:
        kiero::shutdown();
        ImGui::Shutdown();
        break;
    }
    return TRUE;
}