//
//  builder.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 18/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "engine.h"
#include "car.h"
#include "vEngine.h"

class CarBuilder{
public: 
	virtual Engine* buildEngine() = 0;
	virtual Door* buildDoor() = 0;
	
};

class FerrariBuilder : public CarBuilder {
public:
	virtual Engine* buildEngine();
	virtual Door* buildDoor();
};

class FactoryBuilder{
public:
	Car build(CarBuilder& carBuilder){
        Car car;
		carBuilder.buildEngine();
		carBuilder.buildDoor();
        return car;
	}
};

