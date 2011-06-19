//
//  main.cpp
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 17/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>
#include "abstractFactory.h"

int main (void) {
    Car car; 
	ToyotaFactory toyota;
	
	Factory factory;
	car = factory.build(toyota);
    
    std::cout << "Car Type: " << car.getName() << " " << "Engine power: " << car.getEngine()->getHorsePower();
    	
    return 0;
}