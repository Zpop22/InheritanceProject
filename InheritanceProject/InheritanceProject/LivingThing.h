#pragma once
#include <string>
using namespace std;

class LivingThing
{
public:
	LivingThing();
	void respond();
	void ignore();

	bool hasCells = true;
	bool carbonBased = true;

};

