//
//  builder.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 18/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "car.h"
#include "vEngine.h"

class CarBuilder{
public: 
	virtual Engine* buildEngine() = 0;
	virtual Door* buildDoor() = 0;
    virtual string getName() = 0;
	
};

class FerrariBuilder : public CarBuilder {
public:
	virtual Engine* buildEngine();
	virtual Door* buildDoor();
    string getName();
};

class FactoryBuilder{
public:
	Car build(CarBuilder& carBuilder){
        Car car;
		car.setEngine(carBuilder.buildEngine());
		car.setDoors(carBuilder.buildDoor());
        car.setName(carBuilder.getName());
        return car;
	}
};

