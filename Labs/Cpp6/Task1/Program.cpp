#include "Student.h"
#include "ChiefStudent.h"

Student* student = new Student(
	"Test1",
	"Test2",
	"Name1"
);
ChiefStudent* chiefStudent = new ChiefStudent(
	"Test3",
	"Test4",
	"Name2",
	"Red",
	2
);

void main() {
	student->Display();
	chiefStudent->Display();

	chiefStudent->Compliment(student);
	chiefStudent->Compliment(chiefStudent); //student pointer

	student = chiefStudent; //implicit cast
	student->Display(); 
}

