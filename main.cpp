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
#include "builder.h"

int main (void) { 
	ToyotaFactory toyotaFactory;
	
	Factory factory;
	Car toyota = factory.build(toyotaFactory);
    
    std::cout<< "Create by Abstract Factory \n";
    std::cout << "Car Type: " << toyota.getName() << " " << "Engine power: " << toyota.getEngine()->getHorsePower() << "\n";

    FerrariBuilder ferrariBuilder;
    FactoryBuilder factoryBuilder;
    Car ferrari = factoryBuilder.build(ferrariBuilder);
    
    std::cout << "Create by Buider \n";
    std::cout << "Car Type: " << ferrari.getName() << " " << "Engine power: " << ferrari.getEngine()->getHorsePower() << "\n";
    	
    return 0;
}