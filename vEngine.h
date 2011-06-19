//
//  vEngine.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 16/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#ifndef VENGINE_H
#define VENGINE_H

#include <iostream>
#include "engine.h"

class VEngine: public Engine
{
private:
    int turboPower;
    
public:
	VEngine(int hp);
    int getTurbo();
    void setTurbo(int turboPower);
	
};

#endif
