/*
 *  builder.cpp
 *  MyDesignPattern
 *
 *  Created by Noppanit Charassinvichai on 12/06/2011.
 *  Copyright 2011 Trinop. All rights reserved.
 *
 */
#include <iostream>
#include <string>

using namespace std;

class CarBuilder{
public: 
	virtual void buildEngine() = 0;
	virtual void buildDoor() = 0;
	
};

class ToyotaBuilder : public CarBuilder {
public:
	virtual void buildEngine(){
		cout << "Toyota engine gets built" << "\n";
	}
	
	virtual void buildDoor(){
		cout << "Toyota doors get built" << "\n";
	}
	
};

class FerrariBuilder : public CarBuilder {
public:
	virtual void buildEngine(){
		cout << "V12 Engine get built" << "\n";
	}
	
	virtual void buildDoor(){
		cout << "Hand made doors get built" << "\n";
	}
};

class FactoryBuilder{
public:
	void build(CarBuilder& carBuilder){
		carBuilder.buildEngine();
		carBuilder.buildDoor();
	}
};

