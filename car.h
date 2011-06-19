//
//  car.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 17/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "engine.h"
#include "wheel.h"
#include "door.h"

using namespace std;

class Car{
private:
    Engine* carEngine;
    Wheel* carWheel;
    Door* carDoor;
    string name;
    
public:
    Engine* getEngine(); 
    void setEngine(Engine* engine);
    Wheel* getWheel();
    void setWheels(Wheel* wheel); 
    Door* getDoor();
    void setDoors(Door* door);
    string getName();
    void setName(string name);
};

#endif