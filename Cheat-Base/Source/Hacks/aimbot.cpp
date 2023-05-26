#include "aimbot.h"
#include "../SDK/LocalPlayer.h"
#include "../Interfaces.h"
#include "../SDK/Source2/BasePlayerWeapon.h"

void AimBot::RunAimbot(UserCmd* cmd) noexcept
{
	//Check if shooting

	if (!(cmd->buttons & UserCmd::IN_ATTACK))
		return;


	
}