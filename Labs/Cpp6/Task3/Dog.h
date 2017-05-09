#pragma once
#include "Animal.h"
class Dog : public Animal {
public:
	Dog(char*, char*, int, bool);

	void Play(int);

	virtual void Move();
	virtual void Eat();
	virtual void Talk();
	virtual void Cry();
	virtual void Display();
	~Dog();
};

