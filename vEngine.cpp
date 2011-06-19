//
//  vEngine.cpp
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 16/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "vEngine.h"

VEngine::VEngine(int hp)
{
    setHorsePower(hp);
}

int VEngine::getTurbo(){
    return this->turboPower;
}

void VEngine::setTurbo(int turboPower){
    this->turboPower = turboPower;
    // Bad design, but just a temporary.
    horsePower+= turboPower;
}