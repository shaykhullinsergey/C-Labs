#pragma once
#include <string>

using namespace std;

class Human {
protected:
	string _firstName;
	string _midName;
	string _lastName;
	int _age;
public:
	Human();
	Human(string, string, string, int); 
	virtual void Display() = 0;
	virtual ~Human();
};

