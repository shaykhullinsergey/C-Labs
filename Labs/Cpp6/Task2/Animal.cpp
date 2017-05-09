#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(char* name, char * food) : Alive(name, 4, true) {
	_food = food;
}

void Animal::Move() {
	cout << "I am running" << endl;
}
void Animal::Eat() {
	cout << "I am eating " << _food << endl;
}
void Animal::Talk() {
	cout << "Meow" << endl;
}
void Animal::Display() {
	cout << "Animal: " << _name 
		 << " Limbs: " << _limbs 
		 << " Tail?: " << (_hasTail ? "True" : "False") 
		 << " Food: " << _food 
		 << endl;
}

Animal::~Animal() {
	delete _food;
}
