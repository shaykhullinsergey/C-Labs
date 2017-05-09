#pragma once
class Student {
protected:
	char* _faculty;
	char* _specification;
	char* _name;
public:
	Student(char* faculty, char* specification, char* name);
	~Student();
	virtual void Display();
	char* Name();
};

