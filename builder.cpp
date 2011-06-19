/*
 *  builder.cpp
 *  MyDesignPattern
 *
 *  Created by Noppanit Charassinvichai on 12/06/2011.
 *  Copyright 2011 Trinop. All rights reserved.
 *
 */
#include <iostream>
#include "builder.h"

Engine* FerrariBuilder::buildEngine(){
    Engine* engine = new VEngine(400);
    return engine;
}

Door* FerrariBuilder::buildDoor(){
    Door* door = new Door;
    return door;
}

