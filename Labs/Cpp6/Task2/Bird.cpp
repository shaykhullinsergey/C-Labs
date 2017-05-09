#include "Bird.h"
#include <iostream>

using namespace std;


Bird::Bird(char* name, char * season) : Alive(name, 2, true) {
	_season = season;
}

void Bird::Move() {
	cout << "I am flying" << endl;
}
void Bird::Eat() {
	cout << "I am eating corns" << endl;
}
void Bird::Talk() {
	cout << "KYPJIbIK KYPJIbIK" << endl;
}
void Bird::Display() {
	cout << "Bird: " << _name 
		 << " Limbs: " << _limbs 
		 << " Season: " << _season 
		 << endl;
}

Bird::~Bird() {
	delete _season;
}
