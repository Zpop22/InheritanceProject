#pragma once
#include "Livingthing.h"

class Fungi: public LivingThing{
public:
	void sendSpores();

	bool hasSpores = true;
};
