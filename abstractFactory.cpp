/*
 *  abstractFactory.cpp
 *  MyDesignPattern
 *
 *  Created by Noppanit Charassinvichai on 12/06/2011.
 *  Copyright 2011 Trinop. All rights reserved.
 *
 */

#include "abstractFactory.h"

using namespace std;

Engine* ToyotaFactory::buildEngine(){
    return new NormalEngine(90);
}

Wheel* ToyotaFactory::buildWheel(){
    return new Wheel;

}

Door* ToyotaFactory::buildDoor(){
    return new Door;
}

/******** Ferrari **************/

Engine* FerrariFactory::buildEngine(){
    return new VEngine(400);
}

Wheel* FerrariFactory::buildWheel(){
    return new Wheel;
}

Door* FerrariFactory::buildDoor(){
    return new Door;
}

