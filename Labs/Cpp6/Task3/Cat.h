#pragma once
#include "Animal.h"
class Cat : public Animal {
public:
	Cat(char*, char*, int, bool);

	void Sleep(int);

	virtual void Move();
	virtual void Eat();
	virtual void Talk();
	virtual void Cry();
	virtual void Display();
	~Cat();
};

