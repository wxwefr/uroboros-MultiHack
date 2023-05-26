#pragma once

#include <vector>
#include <string>
#include <filesystem>

class Config {
public:
    Config() noexcept;
    void load(size_t) noexcept;
    void load(std::string name) noexcept;
    void save(size_t) const noexcept;
    void add(std::string) noexcept;
    void remove(size_t) noexcept;
    void rename(size_t, std::string) noexcept;
    void reset() noexcept;
    void listConfigs() noexcept;
    void createConfigDir() const noexcept;

    constexpr auto& getConfigs() noexcept
    {
        return configs;
    }

    struct Misc {
        bool bunnyHop{ false };
        bool customCrosshair{ false };
    } misc;    
    
    struct EnemyESP {
        //E stands for enemy
        bool eBox{ false };
        bool eName{ false };
        bool eHealthbar{ false };
        bool eHealth{ false };
    } enemyEsp;

    struct TeamESP {
        //T stands for Team
        bool tBox{ false };
        bool tName{ false };
        bool tHealthBar{ false };
        bool tHealth{ false };
    } teamEsp;

    struct EnableESP {
        bool enableEsp{ false };
    } enableESP;

private:
    std::filesystem::path path;
    std::vector<std::string> configs;
};

inline std::unique_ptr<Config> config;