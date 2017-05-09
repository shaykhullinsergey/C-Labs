#include "Child.h"

Child* child1;
Child* child2;

void main() {
	//property
	child1 = new Child();
	child1->FirstName("Yolo");
	child1->LastName("Rusher");
	child1->Age(24);
	child1->Display();

	//constructor
	child2 = new Child("Sarah", "Green", 36);
	child2->Display();
}

