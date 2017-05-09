#include <iostream>
#include "ChiefStudent.h"

using namespace std;

ChiefStudent::ChiefStudent(char* fac, char* spec, char* name, char* form, int dur) : Student(fac, spec, name) {
	_uniform = form;
	_duration = dur;
}

void ChiefStudent::Display() {
	cout << "ChiefStudent: " << _name 
		 << " Faculty: " << _faculty 
		 << " Specification: " << _specification 
		 << " Uniform: " << _uniform << " Duration: " 
		 << _duration << "mounth" 
		 << endl;
}
void ChiefStudent::Compliment(Student * student) {
	cout << student->Name() << ", you are a good student!" << endl;
}

ChiefStudent::~ChiefStudent() {
	delete _uniform;
}
