#pragma once
#include "../Config/Config.h"
#include "../Memory/Memory.h"

#include "../SDK/Source2/GameEntitySystem.h"
#include "../SDK/Source2/MoveType.h"
#include "../SDK/Source2/UserCmd.h"
#include "../SDK/Source2/CSPlayerPawnBase.h"

class UserCmd;

namespace AimBot
{
	void RunAimbot(UserCmd* cmd) noexcept;
};

