#pragma once
class Alive {
protected:
	char* _name;
	int _limbs;
	bool _hasTail;

public:
	Alive(char*,int, bool);
	virtual void Move() = 0;
	virtual void Eat() = 0;
	virtual void Talk() = 0;
	virtual void Display();
	virtual ~Alive();
};

