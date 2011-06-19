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

using namespace std;

int main (void) {
    Car car; 
	ToyotaFactory toyota;
//	FerrariFactory ferrari;
	
	Factory factory;
	car = factory.build(toyota);
    
    cout << "Car Type: " << car.getName();
    
//	factory.build(ferrari);
	
    return 0;
}