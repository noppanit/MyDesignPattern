//
//  car.cpp
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 17/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "car.h"

Engine* Car::getEngine(){
    return engine;
}

void Car::setEngine(Engine &engine){
    engine = engine;
}

Door* Car::getDoors(){
    return door;
}

void Car::setDoors(Door &door){
    door = door;
}

Wheel* Car::getWheels(){
    return wheel;
}

void Car::setWheels(Wheel &wheel){
    wheel = wheel;
}

void Car::setName(string name){
    name = name;
}

string Car::getName(){
    return name;
}
