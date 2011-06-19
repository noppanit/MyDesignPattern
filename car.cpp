//
//  car.cpp
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 17/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "car.h"

Engine* Car::getEngine(){
    return this->carEngine;
}    

void Car::setEngine(Engine* engine){
    this->carEngine = engine;
}

Door* Car::getDoor(){
    return this->carDoor;
}

void Car::setDoors(Door* door){
    this->carDoor = door;
}

Wheel* Car::getWheel(){
    return this->carWheel;
}

void Car::setWheels(Wheel* wheel){
    this->carWheel = wheel;
}

void Car::setName(string name){
    this->name = name;
}

string Car::getName(){
    return this->name;
}
