#include <iostream>
#include "Animal.h"

using namespace std;


Animal::Animal(char *name , char * mood, int legs, bool hunger){ 
	_name = name;
	_mood = mood;
	_legs = legs;
	_hunger = hunger;
}
void Animal::Display() {
	cout << "Animal: " << _name 
		 << " Legs: " << _legs 
		 << " Hunger: " << _hunger 
		 << endl;
}

Animal::~Animal() {
	delete _name;
}