//
//  abstractFactory.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 17/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include <iostream>
#include <string>
#include "vEngine.h"
#include "normalEngine.h"
#include "car.h"

using namespace std;

class CarAbstractFactory
{
public:
	virtual Engine* buildEngine() = 0;
    virtual Wheel* buildWheel() = 0;
    virtual Door* buildDoor() = 0;
    virtual string getName() = 0;
};

class ToyotaFactory : public CarAbstractFactory
{
public:
	virtual Engine* buildEngine();
    virtual Wheel* buildWheel();
    virtual Door* buildDoor();
    
    string getName(){
        return "Toyota";
    }

};

class FerrariFactory : public CarAbstractFactory
{
public:
	virtual Engine* buildEngine();
    virtual Wheel* buildWheel();
    virtual Door* buildDoor();
    
    string getName(){
        return "Ferrari";
    }
};

class Factory
{
public:
	Car* build (CarAbstractFactory& carFactory)
	{
        Car* car;
		Engine* engine = carFactory.buildEngine();
        Wheel* wheel = carFactory.buildWheel();
        Door* door = carFactory.buildDoor();
        
        car->setEngine(*engine);
        car->setWheels(*wheel);
        car->setDoors(*door);
        car->setName(carFactory.getName());
        return car;
	}
};
