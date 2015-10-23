#include <iostream>
#include <string>
using namespace std;

#include <tolua++.h>
#include <lua.hpp>

#include "PlayerData.h"
#include "tolua_PlayerData.h"

int main()
{ 
	lua_State *L = lua_open();

	if (nullptr == L)
	{
		cout << "Error Initializing lua\n";
		return -1;
	}

	luaL_openlibs(L);	//初始化全部 lua 標準 lib
	tolua_open(L);          // 初始化 tolua

	tolua_PlayerData_open(L);	
	luaL_dofile(L, "lua/testPlayerData.lua");

	lua_getglobal(L, "playerData");

	PlayerData* playerData_ = (PlayerData*)tolua_touserdata(L, -1, 0);



	cout << "\n=======[playerData_]============\n";
	cout << playerData_->getName();
	cout << "\n=======[end]====================\n";







	lua_close(L);
	
	system("pause");

    return 0;
}

