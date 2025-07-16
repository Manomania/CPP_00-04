#pragma once

#include <iostream>

class Character {
private:
public:
	Character();
	Character(const std::string& name);
	Character(const Character& copy);
	Character& operator=(const Character& copy);
	~Character();
};
