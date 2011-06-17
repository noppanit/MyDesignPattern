//
//  engine.h
//  MyDesignPattern
//
//  Created by Noppanit Charassinvichai on 16/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
protected:
	int horsePower;
	
public:
	void setHorsePower(int hp);
	int getHorsePower();
};

#endif