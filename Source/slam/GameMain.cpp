#include <engine/core/main/module.h>

namespace Echo
{
	void registerGameModules()
	{
		REGISTER_MODULE(MapModule)
		REGISTER_MODULE(OrbSlam3Module)
	}
}
