#include <iostream>
#include <string>
using namespace std;

#include <tolua++.h>
#include <lua.hpp>

#include "PlayerData.h"
#include "tolua_PlayerData.h"


static void stackDump(lua_State* L);

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
	cout << "[C]  Name:" << playerData_->getName() << endl;
	cout << "[C]  Energy:" << playerData_->getEnergy() << endl;
	playerData_->setName("Ken");
	playerData_->setEnergy(10);
	cout << "[C]  Name:" << playerData_->getName() << endl;
	cout << "[C]  Energy:" << playerData_->getEnergy() << endl;


	auto show_pcall_Err = [&](){
		//lua_error(L);
		cout << "error pcall:" << lua_tostring(L, -1) << endl;
		system("pause");
		exit(1);
	};

	auto show_table_Err = [](){
		cout << "error table: is not a table" << endl;
		system("pause");
		exit(1);
	};

	//呼叫 Lua function
	lua_getglobal(L, "ShowPlayerData");
	if (lua_pcall(L, 0, 0, 0) != 0)
		show_pcall_Err();

	//取出亂數
	for (int i = 0; i < 5; i++)
	{
		lua_getglobal(L, "GetRandom");
		lua_pushnumber(L, 10);	//min
		lua_pushnumber(L, 100);	//max
		if (lua_pcall(L, 2, 1, 0) != 0)
			show_pcall_Err();

		int r = lua_tonumber(L, -1);
		lua_pop(L, 1);
		cout << "[C] Random:" << r << endl;
	}

	//取出 ColorData
	lua_getglobal(L, "ColorData");

	if (!lua_istable(L, -1))
		show_table_Err();

	//以下可以使用 lua_getfield(L,-1,"r") 來取代
	//lua_pushstring(L,"r");
	//lua_gettable(L,-2);

	lua_getfield(L, -1, "r");
	lua_getfield(L, -2, "g");
	lua_getfield(L, -3, "b");

	//印出 Stack
	stackDump(L);

	int red = lua_tointeger(L, -3);
	int green = lua_tointeger(L, -2);
	int blue = lua_tointeger(L, -1);
	printf("[C] Red:%d ,Green:%d, Blue:%d\n", red, green, blue);

	//push 多少個,就要 pop 多少個
	lua_pop(L,3);


	lua_close(L);
	system("pause");
	return 0;
}



static void stackDump(lua_State* L)
{
	cout << "\n[C]-----begin dump lua stack" << endl;
	int i = 0;
	int top = lua_gettop(L);
	for (i = 1; i <= top; ++i) {
		int t = lua_type(L, i);
		switch (t) {
		case LUA_TSTRING:
		{
			printf("'%s' ", lua_tostring(L, i));
		}
		break;
		case LUA_TBOOLEAN:
		{
			printf(lua_toboolean(L, i) ? "true " : "false ");
		}break;
		case LUA_TNUMBER:
		{
			printf("%g ", lua_tonumber(L, i));
		}
		break;
		default:
		{
			printf("%s ", lua_typename(L, t));
		}
		break;
		}
	}
	cout << "\n[C]-----end dump lua stack\n" << endl;

}