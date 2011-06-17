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

using namespace std;

class CarAbstractFactory
{
public:
	virtual Engine* buildEngine() = 0;
	virtual string getName() = 0;
};

class ToyotaFactory : public CarAbstractFactory
{
public:
	virtual Engine* buildEngine();
	virtual string getName();
	
};

class FerrariFactory : public CarAbstractFactory
{
public:
	virtual Engine* buildEngine();
	virtual string getName();
};

class Factory
{
public:
	void build (CarAbstractFactory& carFactory)
	{
		Engine* engine = carFactory.buildEngine();
		cout << carFactory.getName() ; cout << engine->getHorsePower(); cout << "\n";
	}
};
