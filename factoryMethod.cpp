//
//  factoryMethod.cpp
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 18/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "factoryMethod.h"

Car CarCreator::buildCar(){
    
    Car car;
    car.setEngine(buildEngine());
    car.setDoors(buildDoor());
    car.setWheels(buildWheel());
    car.setName(getName());
    
    return car;
}