#include "Child.h"
#include <iostream>
using namespace std;

Child::Child()
{
	_firstName = "";
	_lastName = "";
	_age = 0;
}
Child::Child(char * name, char * lastName, int age)
{
	_firstName = name;
	_lastName = lastName;
	_age = age;
}
Child::Child(const Child & child)
{
	_firstName = child._firstName;
	_lastName = child._lastName;
	_age = child._age;
}
Child::~Child()
{
	delete _firstName;
	delete _lastName;
}

void Child::FirstName(char * name) {
	_firstName = name;
}
char* Child::FirstName() {
	return _firstName;
}
void Child::LastName(char * name) {
	_lastName = name;
}
char* Child::LastName() {
	return _lastName;
}
void Child::Age(int age) {
	_age = age;
}
int Child::Age() {
	return _age;
}
void Child::Display() {
	cout << "FirstName: " << _firstName 
		 << " LastName: " << _lastName 
		 << " Age: " << _age 
		 << endl;
}
