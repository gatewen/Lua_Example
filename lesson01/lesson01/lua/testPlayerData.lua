print("[LUA]-------------------")
print("[LUA]Open PlayerData.lua File")
print("[LUA]-------------------")

playerData = PlayerData:new()
playerData:setName("gatewen")
playerData:setEnergy(5);

function ShowPlayerData()
	print("[LUA] Name:"..playerData:getName())
	print("[LUA] Energy:"..playerData:getEnergy())
end

ShowPlayerData()


math.randomseed(tonumber(string.reverse(os.time())))
function GetRandom(a,b)	
	return math.random(a,b)	
end

ColorData = {r = 128,g = 30,b = 196}








