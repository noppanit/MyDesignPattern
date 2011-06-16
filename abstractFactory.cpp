/*
 *  abstractFactory.cpp
 *  MyDesignPattern
 *
 *  Created by Noppanit Charassinvichai on 12/06/2011.
 *  Copyright 2011 Trinop. All rights reserved.
 *
 */

#include <iostream>
#include <string>
#include "builder.cpp"
#include "engine.h"

using namespace std;

/* Product */
/********************************/


class VEngine: public Engine
{
public:
	VEngine(int hp)
	{
		setHorsePower(hp);
	}
	
};

class NormalEngine: public Engine
{
public:
	NormalEngine(int hp)
	{
		setHorsePower(hp);
	}
};

/********************************/
/* Factory */
class CarFactory
{
public:
	virtual Engine* buildEngine() = 0;
	virtual string getName() = 0;
};

class Toyota : public CarFactory
{
public:
	virtual Engine* buildEngine()
	{
		return new NormalEngine(90);
	}
	virtual string getName()
	{
		return "Toyota";
	}
	
};

class Ferrari : public CarFactory
{
public:
	virtual Engine* buildEngine()
	{
		return new VEngine(400);
	}
	virtual string getName()
	{
		return "Ferrari";
	}
};

class Factory
{
public:
	void build (CarFactory& carFactory)
	{
		Engine* engine = carFactory.buildEngine();
		cout << carFactory.getName() ; cout << engine->getHorsePower(); cout << "\n";
	}
};

int main (void) {
	Toyota toyota;
	Ferrari ferrari;
	
	Factory factory;
	factory.build(toyota);
	factory.build(ferrari);
	
	ToyotaBuilder toyotaBuilder;
	FerrariBuilder ferrariBuilder;
	
	FactoryBuilder factoryBuilder;
	factoryBuilder.build(toyotaBuilder);
	factoryBuilder.build(ferrariBuilder);
	
    return 0;
}
