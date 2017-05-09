#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(char *name, char * mood, int legs, bool hunger) : Animal(name, mood, legs, hunger) { }

void Cat::Sleep(int hours) {
	cout << "Slept " << hours << " hours... Arrr)" << endl;
}
void Cat::Move() {
	cout << "... walking silently ..." << endl;
}
void Cat::Eat() {
	cout << "I am eating mouse ^_^" << endl;
}
void Cat::Talk() {
	cout << "Meow" << endl;
}
void Cat::Cry() {
	cout << "Meooooow(((" << endl;
}
void Cat::Display() {
	cout << "Cat: " << _name 
		 << " Mood: " << _mood 
		 << " hunger?: " << (_hunger ? "True" : "False") 
		 << endl;
}


Cat::~Cat() {
	delete _name, _mood;
}
