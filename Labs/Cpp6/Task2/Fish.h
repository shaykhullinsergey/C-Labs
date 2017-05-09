#pragma once
#include "Alive.h"
class Fish : public Alive {
protected:
	int _deep;
public:
	Fish(char*, int deep);
	virtual void Move();
	virtual void Eat();
	virtual void Talk();
	virtual void Display();
	~Fish();
};

