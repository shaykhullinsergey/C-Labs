#include "Student.h"
#include "Boss.h"

Student* student = new Student(
	string("FirstName1"), 
	string("MidName1"), 
	string("LastName1"), 
	19, 
	true
);
Boss* boss = new Boss(
	string("FirstName2"), 
	string("MidName2"), 
	string("LastName2"), 
	24, 
	300
);

void main() {
	student->Display();
	boss->Display();
}

