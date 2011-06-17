//
//  car.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 17/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>
#include "engine.h"
#include "wheel.h"
#include "door.h"

using namespace std;

class Car{
private:
    Engine* engine;
    Wheel* wheel;
    Door* door;
    string name;
    
public:
    void setEngine(Engine &engine);
    void setWheels(Wheel &wheel); 
    void setDoors(Door &door);
    string getName();
    void setName(string name);
};