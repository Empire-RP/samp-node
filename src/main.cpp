#include <iostream>
#include "callbacks.hpp"
#include <sampgdk.h>
#include "common.hpp"

bool node_init();
void node_tick();
void node_stop();
void node_event_callback(const std::string& name, AMX* amx, cell* params, cell* retval);

PLUGIN_EXPORT bool PLUGIN_CALL OnPublicCall(AMX* amx, const char* name, cell* params, cell* retval)
{
	node_event_callback(name, amx, params, retval);
	return true;
}

PLUGIN_EXPORT void PLUGIN_CALL ProcessTick()
{
	sampgdk::ProcessTick();
	node_tick();
	return;
}

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
	return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void** ppData)
{
	sampgdk::Load(ppData);
	sampnode::callback::init();
	node_init();
	pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
	return true;
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad(AMX* amx)
{
	return 1;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	sampgdk::Unload();
	node_stop();
	return;
}

PLUGIN_EXPORT int PLUGIN_CALL AmxUnload(AMX* amx)
{
	return 1;
}