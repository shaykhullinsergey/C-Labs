#include "Student.h"
#include <vector>

vector<Student*> vect;

void main() {
	vect.push_back(new Student("Yolo1", 4, true));
	vect.push_back(new Student("Yolo2", 3, true));
	vect.push_back(new Student("Yolo3", 2, false));
	vect.push_back(new Student("Yolo4", 1, false));
	vect.push_back(new Student("Yolo5", 0, false));

	for (Student* ptr : vect)
		ptr->Display();
}

