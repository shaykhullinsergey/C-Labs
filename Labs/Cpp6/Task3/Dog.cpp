#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(char * name, char *mood, int legs, bool hunger) : Animal(name, mood, legs, hunger) {}

void Dog::Play(int hours) {
	cout << "Played " << hours << " hours" << endl;
}
void Dog::Move() {
	cout << "Running very loud!!!" << endl;
}
void Dog::Eat() {
	cout << "Eating CATSSS!!!" << endl;
}
void Dog::Talk() {
	cout << "Barf Barf!" << endl;
}
void Dog::Cry() {
	cout << "Wooof((" << endl;
}
void Dog::Display() {
	cout << "Dog: " << _name 
		 << " Mood: " << _mood 
		 << " hunger?: " << (_hunger ? "True" : "False") 
		 << endl;
}

Dog::~Dog() {
	delete _name, _mood;
}
