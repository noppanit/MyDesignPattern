//
//  factoryMethod.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 18/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "car.h"
#include "normalEngine.h"
#include "vEngine.h"

class CarCreator{
public:
    Car buildCar();
    
    virtual Engine* buildEngine() = 0;
    virtual Wheel* buildWheel() = 0;
    virtual Door* buildDoor() = 0;
    virtual string getName() = 0;
};

class MazdaCreator : public CarCreator{
    
    virtual Engine* buildEngine(){
        return new VEngine(100);
    }
    
    virtual Wheel* buildWheel(){
        return new Wheel;
    }
    
    virtual Door* buildDoor(){
        return new Door;
    }
    
    virtual string getName(){
        return "Mazda";
    }
};