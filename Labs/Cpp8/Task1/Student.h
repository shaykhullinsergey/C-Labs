#pragma once
#include <string>
using namespace std;

class Student {
private:
	string _name;
	int _grade;
	bool _onLesson;
public:
	Student();
	Student(string, int, bool);
	void Display();
	~Student();
};

