/*
** $Id: lualib.h $
** Lua standard libraries
** See Copyright Notice in lua.h
*/


#ifndef lualib_h
#define lualib_h

#include "lua.h"


/* version suffix for environment variable names */
#define LUA_VERSUFFIX          "_" LUA_VERSION_MAJOR "_" LUA_VERSION_MINOR


LUAMOD_API int (luaopen_base) (lua_State *L);

#define LUA_COLIBNAME	LT_LUALIB_COROUTINE
LUAMOD_API int (luaopen_coroutine) (lua_State *L);

#define LUA_TABLIBNAME	LT_LUALIB_TABLE
LUAMOD_API int (luaopen_table) (lua_State *L);

#define LUA_IOLIBNAME	LT_LUALIB_IO
LUAMOD_API int (luaopen_io) (lua_State *L);

#define LUA_OSLIBNAME	LT_LUALIB_OS
LUAMOD_API int (luaopen_os) (lua_State *L);

#define LUA_STRLIBNAME	LT_LUALIB_STRING
LUAMOD_API int (luaopen_string) (lua_State *L);

#define LUA_UTF8LIBNAME	LT_LUALIB_UTF8
LUAMOD_API int (luaopen_utf8) (lua_State *L);

#define LUA_MATHLIBNAME	LT_LUALIB_MATH
LUAMOD_API int (luaopen_math) (lua_State *L);

#define LUA_DBLIBNAME	LT_LUALIB_DEBUG
LUAMOD_API int (luaopen_debug) (lua_State *L);

#define LUA_LOADLIBNAME	LT_LUALIB_PACKAGE
LUAMOD_API int (luaopen_package) (lua_State *L);


/* open all previous libraries */
LUALIB_API void (luaL_openlibs) (lua_State *L);


#endif
