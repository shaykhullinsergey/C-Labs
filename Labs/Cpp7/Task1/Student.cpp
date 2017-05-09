#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() : Human(){
	_onLesson = false;
}
Student::Student(string fName, string mName, string	lName, int age, bool onLesson) : Human(fName, mName, lName, age){
	_onLesson = onLesson;
}
void Student::Display(){
	cout << "Student: " << _firstName 
		 << " " << _midName 
		 << " " << _lastName 
		 << " Age: " << _age 
		 << " OnLesson: " << (_onLesson ? "True" : "False")
		 << endl;;
}

Student::~Student()
{
	delete &_onLesson;
}
