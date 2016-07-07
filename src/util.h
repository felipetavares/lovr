#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

void error(const char* format, ...);
char* loadFile(char* filename);
void luaRegisterModule(lua_State* L, const char* name, const luaL_Reg* module);
void luaRegisterType(lua_State* L, const char* name, const luaL_Reg* functions);
void* luaPushType(lua_State* L, const char* type);
