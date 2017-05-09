#pragma once
#include "Human.h"
class Student : public Human {
private:
	bool _onLesson;
public:
	Student();
	Student(string, string, string, int, bool);
	virtual void Display();
	~Student();
};

