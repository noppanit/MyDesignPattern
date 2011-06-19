//
//  car.cpp
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 17/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "car.h"

void Car::setEngine(Engine &engine){
    engine = engine;
}

void Car::setDoors(Door &door){
    door = door;
}

void Car::setWheels(Wheel &wheel){
    wheel = wheel;
}

void Car::setName(string name){
    this->name = name;
}

string Car::getName(){
    return this->name;
}
