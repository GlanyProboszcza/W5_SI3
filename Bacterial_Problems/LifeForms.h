#pragma once
#include "Library.h"

class LifeForms {

private:
	int dishPositionX;
	int dishPositionY;

protected:
	int distance;
	char bacterialSign;
	bool isAlive;

public:

	LifeForms(int x, int y)
		: dishPositionX(x), 
		dishPositionY(y) {}

	virtual bool getIsAlive();  // virtual
	virtual void setIsAlive();  // virtual
	virtual bool checkNearby() = 0;  // pure virtual
	virtual LifeForms split() = 0;  // pure virtual
};

