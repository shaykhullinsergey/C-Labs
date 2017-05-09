#pragma once
#include "Student.h"
class ChiefStudent : public Student {
protected:
	char* _uniform;
	int _duration;
public:
	ChiefStudent(char* fac, char* spec, char* name, char* form, int dur);
	virtual void Display();
	void Compliment(Student* student);
	~ChiefStudent();
};

