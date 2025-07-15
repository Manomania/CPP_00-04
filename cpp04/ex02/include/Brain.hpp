#pragma once
#include <iostream>

class Brain {
private:
	std::string _ideas[100];
public:
	// Constructor
	Brain();
	Brain(const Brain& copy);
	// Overloaded operator
	Brain& operator=(const Brain& copy);
	// Destructor
	~Brain();
};
