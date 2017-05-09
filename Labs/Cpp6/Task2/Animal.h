#pragma once
#include "Alive.h"
class Animal : public Alive {
protected:
	char* _food;
public:
	Animal(char*, char* food);
	virtual void Move();
	virtual void Eat();
	virtual void Talk();
	virtual void Display();
	~Animal();
};

