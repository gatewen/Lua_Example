#ifndef _PLAYER_DATA_H_
#define _PLAYER_DATA_H_

#include <string>

class PlayerData{
private:
	std::string name;
	int energy;
public:
	PlayerData();
	~PlayerData();

	void setName(char* _name);
	const char* getName();

	void setEnergy(int _energy);
	int getEnergy();
};

#endif





