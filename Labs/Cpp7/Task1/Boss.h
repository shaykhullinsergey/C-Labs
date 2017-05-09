#pragma once
#include "Human.h"
class Boss : public Human {
private:
	int _workers;
public:
	Boss();
	Boss(string, string, string, int, int);
	virtual void Display();
	virtual ~Boss();
};

