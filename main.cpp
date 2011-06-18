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
	ToyotaFactory toyotaFactory;
	FerrariFactory ferrariFactory;
	
	Factory factory;
    
    Car* toyota = factory.build(toyotaFactory);
	//Car* ferrari = factory.build(ferrariFactory);
    
    cout << "Car type: " +toyota->getName() << " Engine hp: ";
	
    return 0;
}