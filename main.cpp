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
	ToyotaFactory toyota;
	FerrariFactory ferrari;
	
	Factory factory;
	factory.build(toyota);
	factory.build(ferrari);
	
    return 0;
}