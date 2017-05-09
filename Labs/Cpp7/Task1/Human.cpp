#include "Human.h"
#include <iostream>

using namespace std;

Human::Human() {
	_firstName = string("");
	_midName = string("");
	_lastName = string("");
	_age = 0;
}
Human::Human(string fName, string mName, string	lName, int age) {
	_firstName = fName;
	_midName = mName;
	_lastName = lName;
	_age = age;
}
void Human::Display() {
	cout << "Human: " << _firstName 
		 << " " << _midName 
		 << " " << _lastName 
		 << " Age: " << _age
		 << endl;
}

Human::~Human() {
	delete &_firstName, &_midName, &_lastName;
}
