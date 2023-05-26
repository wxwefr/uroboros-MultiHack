#pragma once

#include <memory>
#include <string>
#include <type_traits>
#include <Windows.h>

class Client;
class SchemaSystem;
class EngineClient;
class GameResourceService;
class InputSystem;

class Interfaces {
public:
    Interfaces()
    {
        schemaSystem = reinterpret_cast<SchemaSystem*>(find(L"schemasystem", "SchemaSystem_001"));
        engineClient = reinterpret_cast<EngineClient*>(find(L"engine2", "Source2EngineToClient001"));
        gameResourceService = reinterpret_cast<GameResourceService*>(find(L"engine2", "GameResourceServiceClientV001"));
        inputSystem = reinterpret_cast<InputSystem*>(find(L"inputsystem", "InputSystemVersion001"));
    }

    SchemaSystem* schemaSystem;
    EngineClient* engineClient;
    GameResourceService* gameResourceService;
    InputSystem* inputSystem;

private:
    static void* find(const wchar_t* moduleName, const char* name) noexcept
    {
        const auto createInterface = reinterpret_cast<void* (__cdecl*)(const char*, int*)>(GetProcAddress(GetModuleHandleW(moduleName), "CreateInterface"));
        if (createInterface)
        {
            void* foundInterface = createInterface(name, nullptr);
            if (foundInterface)
                return foundInterface;
        }

        std::exit(EXIT_FAILURE);
    }
};

inline std::unique_ptr<const Interfaces> interfaces;
