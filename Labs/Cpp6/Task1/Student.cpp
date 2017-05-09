#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(char * faculty, char * specification, char * name) {
	_faculty = faculty;
	_specification = specification;
	_name = name;
}

Student::~Student() {
	delete _faculty, _specification, _name;
}

void Student::Display() {
	cout << "Student: " << _name 
		 << " Faculty: " << _faculty 
		 << " Specification: " << _specification 
		 << endl;
}

char * Student::Name() {
	return _name;
}
