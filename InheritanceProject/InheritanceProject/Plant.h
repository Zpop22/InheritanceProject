#pragma once
#include "LivingThing.h"
class Plant :
    public LivingThing
{
public:
    bool eatsSun = true;
    
    void devourDaSun();
};

