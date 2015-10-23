/*
** Lua binding: PlayerData
** Generated automatically by tolua++-1.0.92 on 10/23/15 15:22:45.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_PlayerData_open (lua_State* tolua_S);

#include "PlayerData.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_PlayerData (lua_State* tolua_S)
{
 PlayerData* self = (PlayerData*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"PlayerData");
}

/* method: new of class  PlayerData */
#ifndef TOLUA_DISABLE_tolua_PlayerData_PlayerData_new00
static int tolua_PlayerData_PlayerData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PlayerData* tolua_ret = (PlayerData*)  Mtolua_new((PlayerData)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PlayerData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  PlayerData */
#ifndef TOLUA_DISABLE_tolua_PlayerData_PlayerData_new00_local
static int tolua_PlayerData_PlayerData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PlayerData* tolua_ret = (PlayerData*)  Mtolua_new((PlayerData)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PlayerData");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  PlayerData */
#ifndef TOLUA_DISABLE_tolua_PlayerData_PlayerData_delete00
static int tolua_PlayerData_PlayerData_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerData* self = (PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setName of class  PlayerData */
#ifndef TOLUA_DISABLE_tolua_PlayerData_PlayerData_setName00
static int tolua_PlayerData_PlayerData_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerData",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerData* self = (PlayerData*)  tolua_tousertype(tolua_S,1,0);
  char* _name = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(_name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  PlayerData */
#ifndef TOLUA_DISABLE_tolua_PlayerData_PlayerData_getName00
static int tolua_PlayerData_PlayerData_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerData* self = (PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnergy of class  PlayerData */
#ifndef TOLUA_DISABLE_tolua_PlayerData_PlayerData_setEnergy00
static int tolua_PlayerData_PlayerData_setEnergy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerData* self = (PlayerData*)  tolua_tousertype(tolua_S,1,0);
  int _energy = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnergy'", NULL);
#endif
  {
   self->setEnergy(_energy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnergy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEnergy of class  PlayerData */
#ifndef TOLUA_DISABLE_tolua_PlayerData_PlayerData_getEnergy00
static int tolua_PlayerData_PlayerData_getEnergy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerData* self = (PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEnergy'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getEnergy();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEnergy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_PlayerData_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"PlayerData","PlayerData","",tolua_collect_PlayerData);
  #else
  tolua_cclass(tolua_S,"PlayerData","PlayerData","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"PlayerData");
   tolua_function(tolua_S,"new",tolua_PlayerData_PlayerData_new00);
   tolua_function(tolua_S,"new_local",tolua_PlayerData_PlayerData_new00_local);
   tolua_function(tolua_S,".call",tolua_PlayerData_PlayerData_new00_local);
   tolua_function(tolua_S,"delete",tolua_PlayerData_PlayerData_delete00);
   tolua_function(tolua_S,"setName",tolua_PlayerData_PlayerData_setName00);
   tolua_function(tolua_S,"getName",tolua_PlayerData_PlayerData_getName00);
   tolua_function(tolua_S,"setEnergy",tolua_PlayerData_PlayerData_setEnergy00);
   tolua_function(tolua_S,"getEnergy",tolua_PlayerData_PlayerData_getEnergy00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_PlayerData (lua_State* tolua_S) {
 return tolua_PlayerData_open(tolua_S);
};
#endif

