#pragma once
class Animal {
protected:
	char* _name;
	char*_mood;
	int _legs;
	bool _hunger;

public:
	Animal(char*, char*, int, bool);
	virtual void Move() = 0;
	virtual void Eat() = 0;
	virtual void Talk() = 0;
	virtual void Cry() = 0;
	virtual void Display();
	virtual ~Animal();
};