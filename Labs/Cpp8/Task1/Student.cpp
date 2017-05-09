#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {
	_name = string("");
	_grade = 0;
	_onLesson = false;
}
Student::Student(string name, int grade, bool onLesson) {
	_name = name;
	_grade = grade;
	_onLesson = onLesson;
}
void Student::Display()
{
	cout << "Name: " << _name
		 << " Grade: " << _grade
		 << " OnLesson: " << (_onLesson ? "True" : "False")
		 << endl;
}

Student::~Student()
{
	delete &_name;
}
