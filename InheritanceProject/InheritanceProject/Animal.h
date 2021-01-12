#pragma once
#include "LivingThing.h"
class Animal :
    public LivingThing
{
public:
    bool cannotMakeOwnFood = true;
};

