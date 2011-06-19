/*
 *  abstractFactory.cpp
 *  MyDesignPattern
 *
 *  Created by Noppanit Charassinvichai on 12/06/2011.
 *  Copyright 2011 Trinop. All rights reserved.
 *
 */

#include "abstractFactory.h"

Engine* ToyotaFactory::buildEngine(){
    return new NormalEngine(90);
}

Wheel* ToyotaFactory::buildWheel(){
    return new Wheel;

}

Door* ToyotaFactory::buildDoor(){
    return new Door;
}

string ToyotaFactory::getName(){
    return "Toyota";
}


