#pragma once
#include "Alive.h"
class Bird : public Alive {
protected:
	char* _season;
public:
	Bird(char*, char* season);
	virtual void Move();
	virtual void Eat();
	virtual void Talk();
	virtual void Display();
	~Bird();
};

