#include "Fish.h"
#include <iostream>

using namespace std;

Fish::Fish(char* name, int deep) : Alive(name, 6, true) {
	_deep = deep;
}

void Fish::Move() {
	cout << "I am swimming" << endl;
}
void Fish::Eat() {
	cout << "I am eating FISHES!!!" << endl;
}
void Fish::Talk() {
	cout << "I can't talk to you(" << endl;
}
void Fish::Display() {
	cout << "Fish: " << _name 
		 << " Limbs: " << _limbs 
		 << " Deep: " << _deep 
		 << endl;
}

Fish::~Fish() {
	delete &_deep;
}
