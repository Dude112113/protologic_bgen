// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.0.1 //

// Generated lua library utilising the generated C bindings.

#include "lua_protologic.hpp"

#include "protologic/protologic.hpp"



// constants //

static int lua_protologiclib_const_get_fueldensity(lua_State* state) {
	float result = const_get_fueldensity();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_spaceshipthrust(lua_State* state) {
	float result = const_get_spaceshipthrust();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_spaceshipfuelconsumption(lua_State* state) {
	float result = const_get_spaceshipfuelconsumption();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missilethrust(lua_State* state) {
	float result = const_get_missilethrust();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missilefuelconsumption(lua_State* state) {
	float result = const_get_missilefuelconsumption();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretminelevation(lua_State* state) {
	float result = const_get_turretminelevation();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretmaxelevation(lua_State* state) {
	float result = const_get_turretmaxelevation();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretelevationspeed(lua_State* state) {
	float result = const_get_turretelevationspeed();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretbearingspeed(lua_State* state) {
	float result = const_get_turretbearingspeed();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretminfuse(lua_State* state) {
	float result = const_get_turretminfuse();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretmaxfuse(lua_State* state) {
	float result = const_get_turretmaxfuse();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretshellspeed(lua_State* state) {
	float result = const_get_turretshellspeed();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_turretrefiretime(lua_State* state) {
	float result = const_get_turretrefiretime();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missileradarminrange(lua_State* state) {
	float result = const_get_missileradarminrange();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missileradarmaxrange(lua_State* state) {
	float result = const_get_missileradarmaxrange();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missileradarminangle(lua_State* state) {
	float result = const_get_missileradarminangle();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missileradarmaxangle(lua_State* state) {
	float result = const_get_missileradarmaxangle();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shipradarminangle(lua_State* state) {
	float result = const_get_shipradarminangle();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shipradarmaxangle(lua_State* state) {
	float result = const_get_shipradarmaxangle();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missilerefiretime(lua_State* state) {
	float result = const_get_missilerefiretime();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shipbasemass(lua_State* state) {
	float result = const_get_shipbasemass();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missilebasemass(lua_State* state) {
	float result = const_get_missilebasemass();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missilewheeltorque(lua_State* state) {
	float result = const_get_missilewheeltorque();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shipwheeltorque(lua_State* state) {
	float result = const_get_shipwheeltorque();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shipradius(lua_State* state) {
	float result = const_get_shipradius();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_missileradius(lua_State* state) {
	float result = const_get_missileradius();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shipmaxcpufuel(lua_State* state) {
	int64_t result = const_get_shipmaxcpufuel();
	lua_pushinteger(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shipmincpufuel(lua_State* state) {
	int64_t result = const_get_shipmincpufuel();
	lua_pushinteger(state, result);
	return 1;
}

static int lua_protologiclib_const_get_shippertickcpufuel(lua_State* state) {
	int64_t result = const_get_shippertickcpufuel();
	lua_pushinteger(state, result);
	return 1;
}



// actions //

static int lua_protologiclib_ship_self_destruct(lua_State* state) {
	ship_self_destruct();
	
	return 0;
}

static int lua_protologiclib_engine_set_throttle(lua_State* state) {
	float arg_throttle = luaL_checknumber(state, 1);
	engine_set_throttle(arg_throttle);
	
	return 0;
}

static int lua_protologiclib_wheel_set_torque(lua_State* state) {
	float arg_x = luaL_checknumber(state, 1);
	float arg_y = luaL_checknumber(state, 2);
	float arg_z = luaL_checknumber(state, 3);
	wheel_set_torque(arg_x, arg_y, arg_z);
	
	return 0;
}

static int lua_protologiclib_runninglight_set_state(lua_State* state) {
	int32_t arg_state = luaL_checkinteger(state, 1);
	runninglight_set_state(arg_state);
	
	return 0;
}

static int lua_protologiclib_radar_set_angle(lua_State* state) {
	float arg_angle = luaL_checknumber(state, 1);
	radar_set_angle(arg_angle);
	
	return 0;
}

static int lua_protologiclib_radar_set_bearing(lua_State* state) {
	float arg_bearing = luaL_checknumber(state, 1);
	radar_set_bearing(arg_bearing);
	
	return 0;
}

static int lua_protologiclib_radar_set_elevation(lua_State* state) {
	float arg_elevation = luaL_checknumber(state, 1);
	radar_set_elevation(arg_elevation);
	
	return 0;
}

static int lua_protologiclib_radar_trigger(lua_State* state) {
	radar_trigger();
	
	return 0;
}

static int lua_protologiclib_gun0_set_bearing(lua_State* state) {
	float arg_bearing = luaL_checknumber(state, 1);
	gun0_set_bearing(arg_bearing);
	
	return 0;
}

static int lua_protologiclib_gun0_set_elevation(lua_State* state) {
	float arg_elevation = luaL_checknumber(state, 1);
	gun0_set_elevation(arg_elevation);
	
	return 0;
}

static int lua_protologiclib_gun0_set_fuse(lua_State* state) {
	float arg_fuse = luaL_checknumber(state, 1);
	gun0_set_fuse(arg_fuse);
	
	return 0;
}

static int lua_protologiclib_gun0_trigger(lua_State* state) {
	gun0_trigger();
	
	return 0;
}

static int lua_protologiclib_gun1_set_bearing(lua_State* state) {
	float arg_bearing = luaL_checknumber(state, 1);
	gun1_set_bearing(arg_bearing);
	
	return 0;
}

static int lua_protologiclib_gun1_set_elevation(lua_State* state) {
	float arg_elevation = luaL_checknumber(state, 1);
	gun1_set_elevation(arg_elevation);
	
	return 0;
}

static int lua_protologiclib_gun1_set_fuse(lua_State* state) {
	float arg_fuse = luaL_checknumber(state, 1);
	gun1_set_fuse(arg_fuse);
	
	return 0;
}

static int lua_protologiclib_gun1_trigger(lua_State* state) {
	gun1_trigger();
	
	return 0;
}

static int lua_protologiclib_gun2_set_bearing(lua_State* state) {
	float arg_bearing = luaL_checknumber(state, 1);
	gun2_set_bearing(arg_bearing);
	
	return 0;
}

static int lua_protologiclib_gun2_set_elevation(lua_State* state) {
	float arg_elevation = luaL_checknumber(state, 1);
	gun2_set_elevation(arg_elevation);
	
	return 0;
}

static int lua_protologiclib_gun2_set_fuse(lua_State* state) {
	float arg_fuse = luaL_checknumber(state, 1);
	gun2_set_fuse(arg_fuse);
	
	return 0;
}

static int lua_protologiclib_gun2_trigger(lua_State* state) {
	gun2_trigger();
	
	return 0;
}

static int lua_protologiclib_gun3_set_bearing(lua_State* state) {
	float arg_bearing = luaL_checknumber(state, 1);
	gun3_set_bearing(arg_bearing);
	
	return 0;
}

static int lua_protologiclib_gun3_set_elevation(lua_State* state) {
	float arg_elevation = luaL_checknumber(state, 1);
	gun3_set_elevation(arg_elevation);
	
	return 0;
}

static int lua_protologiclib_gun3_set_fuse(lua_State* state) {
	float arg_fuse = luaL_checknumber(state, 1);
	gun3_set_fuse(arg_fuse);
	
	return 0;
}

static int lua_protologiclib_gun3_trigger(lua_State* state) {
	gun3_trigger();
	
	return 0;
}



// queries //

static int lua_protologiclib_cpu_get_fuel(lua_State* state) {
	int64_t result = cpu_get_fuel();
	lua_pushinteger(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_position_x(lua_State* state) {
	float result = ship_get_position_x();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_position_y(lua_State* state) {
	float result = ship_get_position_y();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_position_z(lua_State* state) {
	float result = ship_get_position_z();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_velocity_x(lua_State* state) {
	float result = ship_get_velocity_x();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_velocity_y(lua_State* state) {
	float result = ship_get_velocity_y();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_velocity_z(lua_State* state) {
	float result = ship_get_velocity_z();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_orientation_w(lua_State* state) {
	float result = ship_get_orientation_w();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_orientation_x(lua_State* state) {
	float result = ship_get_orientation_x();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_orientation_y(lua_State* state) {
	float result = ship_get_orientation_y();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_orientation_z(lua_State* state) {
	float result = ship_get_orientation_z();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_angularvelocity_x(lua_State* state) {
	float result = ship_get_angularvelocity_x();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_angularvelocity_y(lua_State* state) {
	float result = ship_get_angularvelocity_y();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_ship_get_angularvelocity_z(lua_State* state) {
	float result = ship_get_angularvelocity_z();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_engine_get_fuel_amount(lua_State* state) {
	float result = engine_get_fuel_amount();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_engine_get_fuel_capacity(lua_State* state) {
	float result = engine_get_fuel_capacity();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_engine_get_throttle(lua_State* state) {
	float result = engine_get_throttle();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_radar_get_target_count(lua_State* state) {
	int32_t result = radar_get_target_count();
	lua_pushinteger(state, result);
	return 1;
}

static int lua_protologiclib_radar_get_target_distance(lua_State* state) {
	int32_t arg_index = luaL_checkinteger(state, 1);
	float result = radar_get_target_distance(arg_index);
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_radar_get_target_type(lua_State* state) {
	int32_t arg_index = luaL_checkinteger(state, 1);
	int32_t result = radar_get_target_type(arg_index);
	lua_pushinteger(state, result);
	return 1;
}

static int lua_protologiclib_radar_get_target_id(lua_State* state) {
	int32_t arg_index = luaL_checkinteger(state, 1);
	int64_t result = radar_get_target_id(arg_index);
	lua_pushinteger(state, result);
	return 1;
}

static int lua_protologiclib_gun0_get_bearing(lua_State* state) {
	float result = gun0_get_bearing();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun0_get_elevation(lua_State* state) {
	float result = gun0_get_elevation();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun0_get_refiretime(lua_State* state) {
	float result = gun0_get_refiretime();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun1_get_bearing(lua_State* state) {
	float result = gun1_get_bearing();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun1_get_elevation(lua_State* state) {
	float result = gun1_get_elevation();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun1_get_refiretime(lua_State* state) {
	float result = gun1_get_refiretime();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun2_get_bearing(lua_State* state) {
	float result = gun2_get_bearing();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun2_get_elevation(lua_State* state) {
	float result = gun2_get_elevation();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun2_get_refiretime(lua_State* state) {
	float result = gun2_get_refiretime();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun3_get_bearing(lua_State* state) {
	float result = gun3_get_bearing();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun3_get_elevation(lua_State* state) {
	float result = gun3_get_elevation();
	lua_pushnumber(state, result);
	return 1;
}

static int lua_protologiclib_gun3_get_refiretime(lua_State* state) {
	float result = gun3_get_refiretime();
	lua_pushnumber(state, result);
	return 1;
}





static const struct luaL_Reg lua_protologiclib [] = {

	// constants //

	{"const_get_fueldensity", lua_protologiclib_const_get_fueldensity},

	{"const_get_spaceshipthrust", lua_protologiclib_const_get_spaceshipthrust},

	{"const_get_spaceshipfuelconsumption", lua_protologiclib_const_get_spaceshipfuelconsumption},

	{"const_get_missilethrust", lua_protologiclib_const_get_missilethrust},

	{"const_get_missilefuelconsumption", lua_protologiclib_const_get_missilefuelconsumption},

	{"const_get_turretminelevation", lua_protologiclib_const_get_turretminelevation},

	{"const_get_turretmaxelevation", lua_protologiclib_const_get_turretmaxelevation},

	{"const_get_turretelevationspeed", lua_protologiclib_const_get_turretelevationspeed},

	{"const_get_turretbearingspeed", lua_protologiclib_const_get_turretbearingspeed},

	{"const_get_turretminfuse", lua_protologiclib_const_get_turretminfuse},

	{"const_get_turretmaxfuse", lua_protologiclib_const_get_turretmaxfuse},

	{"const_get_turretshellspeed", lua_protologiclib_const_get_turretshellspeed},

	{"const_get_turretrefiretime", lua_protologiclib_const_get_turretrefiretime},

	{"const_get_missileradarminrange", lua_protologiclib_const_get_missileradarminrange},

	{"const_get_missileradarmaxrange", lua_protologiclib_const_get_missileradarmaxrange},

	{"const_get_missileradarminangle", lua_protologiclib_const_get_missileradarminangle},

	{"const_get_missileradarmaxangle", lua_protologiclib_const_get_missileradarmaxangle},

	{"const_get_shipradarminangle", lua_protologiclib_const_get_shipradarminangle},

	{"const_get_shipradarmaxangle", lua_protologiclib_const_get_shipradarmaxangle},

	{"const_get_missilerefiretime", lua_protologiclib_const_get_missilerefiretime},

	{"const_get_shipbasemass", lua_protologiclib_const_get_shipbasemass},

	{"const_get_missilebasemass", lua_protologiclib_const_get_missilebasemass},

	{"const_get_missilewheeltorque", lua_protologiclib_const_get_missilewheeltorque},

	{"const_get_shipwheeltorque", lua_protologiclib_const_get_shipwheeltorque},

	{"const_get_shipradius", lua_protologiclib_const_get_shipradius},

	{"const_get_missileradius", lua_protologiclib_const_get_missileradius},

	{"const_get_shipmaxcpufuel", lua_protologiclib_const_get_shipmaxcpufuel},

	{"const_get_shipmincpufuel", lua_protologiclib_const_get_shipmincpufuel},

	{"const_get_shippertickcpufuel", lua_protologiclib_const_get_shippertickcpufuel},


	// actions //

	{"ship_self_destruct", lua_protologiclib_ship_self_destruct},

	{"engine_set_throttle", lua_protologiclib_engine_set_throttle},

	{"wheel_set_torque", lua_protologiclib_wheel_set_torque},

	{"runninglight_set_state", lua_protologiclib_runninglight_set_state},

	{"radar_set_angle", lua_protologiclib_radar_set_angle},

	{"radar_set_bearing", lua_protologiclib_radar_set_bearing},

	{"radar_set_elevation", lua_protologiclib_radar_set_elevation},

	{"radar_trigger", lua_protologiclib_radar_trigger},

	{"gun0_set_bearing", lua_protologiclib_gun0_set_bearing},

	{"gun0_set_elevation", lua_protologiclib_gun0_set_elevation},

	{"gun0_set_fuse", lua_protologiclib_gun0_set_fuse},

	{"gun0_trigger", lua_protologiclib_gun0_trigger},

	{"gun1_set_bearing", lua_protologiclib_gun1_set_bearing},

	{"gun1_set_elevation", lua_protologiclib_gun1_set_elevation},

	{"gun1_set_fuse", lua_protologiclib_gun1_set_fuse},

	{"gun1_trigger", lua_protologiclib_gun1_trigger},

	{"gun2_set_bearing", lua_protologiclib_gun2_set_bearing},

	{"gun2_set_elevation", lua_protologiclib_gun2_set_elevation},

	{"gun2_set_fuse", lua_protologiclib_gun2_set_fuse},

	{"gun2_trigger", lua_protologiclib_gun2_trigger},

	{"gun3_set_bearing", lua_protologiclib_gun3_set_bearing},

	{"gun3_set_elevation", lua_protologiclib_gun3_set_elevation},

	{"gun3_set_fuse", lua_protologiclib_gun3_set_fuse},

	{"gun3_trigger", lua_protologiclib_gun3_trigger},


	// queries //

	{"cpu_get_fuel", lua_protologiclib_cpu_get_fuel},

	{"ship_get_position_x", lua_protologiclib_ship_get_position_x},

	{"ship_get_position_y", lua_protologiclib_ship_get_position_y},

	{"ship_get_position_z", lua_protologiclib_ship_get_position_z},

	{"ship_get_velocity_x", lua_protologiclib_ship_get_velocity_x},

	{"ship_get_velocity_y", lua_protologiclib_ship_get_velocity_y},

	{"ship_get_velocity_z", lua_protologiclib_ship_get_velocity_z},

	{"ship_get_orientation_w", lua_protologiclib_ship_get_orientation_w},

	{"ship_get_orientation_x", lua_protologiclib_ship_get_orientation_x},

	{"ship_get_orientation_y", lua_protologiclib_ship_get_orientation_y},

	{"ship_get_orientation_z", lua_protologiclib_ship_get_orientation_z},

	{"ship_get_angularvelocity_x", lua_protologiclib_ship_get_angularvelocity_x},

	{"ship_get_angularvelocity_y", lua_protologiclib_ship_get_angularvelocity_y},

	{"ship_get_angularvelocity_z", lua_protologiclib_ship_get_angularvelocity_z},

	{"engine_get_fuel_amount", lua_protologiclib_engine_get_fuel_amount},

	{"engine_get_fuel_capacity", lua_protologiclib_engine_get_fuel_capacity},

	{"engine_get_throttle", lua_protologiclib_engine_get_throttle},

	{"radar_get_target_count", lua_protologiclib_radar_get_target_count},

	{"radar_get_target_distance", lua_protologiclib_radar_get_target_distance},

	{"radar_get_target_type", lua_protologiclib_radar_get_target_type},

	{"radar_get_target_id", lua_protologiclib_radar_get_target_id},

	{"gun0_get_bearing", lua_protologiclib_gun0_get_bearing},

	{"gun0_get_elevation", lua_protologiclib_gun0_get_elevation},

	{"gun0_get_refiretime", lua_protologiclib_gun0_get_refiretime},

	{"gun1_get_bearing", lua_protologiclib_gun1_get_bearing},

	{"gun1_get_elevation", lua_protologiclib_gun1_get_elevation},

	{"gun1_get_refiretime", lua_protologiclib_gun1_get_refiretime},

	{"gun2_get_bearing", lua_protologiclib_gun2_get_bearing},

	{"gun2_get_elevation", lua_protologiclib_gun2_get_elevation},

	{"gun2_get_refiretime", lua_protologiclib_gun2_get_refiretime},

	{"gun3_get_bearing", lua_protologiclib_gun3_get_bearing},

	{"gun3_get_elevation", lua_protologiclib_gun3_get_elevation},

	{"gun3_get_refiretime", lua_protologiclib_gun3_get_refiretime},


	{NULL, NULL}  /* sentinel */
};


int luaopen_protologic(lua_State *state) {
	lua_newtable(state);
	luaL_setfuncs(state, lua_protologiclib, 0);
	return 1;
}