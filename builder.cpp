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
    VEngine* engine = new VEngine(400);
    engine->setTurbo(100);
    /*
     You can do more stuff here which is different from Abstract Factory.
     Abstract Factory needs to return the product here, and every product 
     will be integrated in the director class.
    */
    return engine;
}

Door* FerrariBuilder::buildDoor(){
    Door* door = new Door;
    /*
     You can do more stuff here which is different from Abstract Factory.
     Abstract Factory needs to return the product here, and every product 
     will be integrated in the director class.
     */
    return door;
}

string FerrariBuilder::getName(){
    return "Ferrari";
}

