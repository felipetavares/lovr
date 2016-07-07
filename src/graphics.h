#include <stdlib.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

int lovrGraphicsClear(lua_State* L);
int lovrGraphicsPresent(lua_State* L);
int lovrGraphicsNewModel(lua_State* L);

extern const luaL_Reg lovrGraphics[];
extern const luaL_Reg lovrModel[];
