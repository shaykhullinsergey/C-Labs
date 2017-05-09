#include <iostream>
#include "Alive.h"

using namespace std;

Alive::Alive(char* name , int limbs, bool tail) {
	_name = name;
	_limbs = limbs;
	_hasTail = tail;
}

void Alive::Display() {
	cout << "Alive: " << _name 
		 << " Limbs: " << _limbs 
		 << " Tail?: " << _hasTail 
		 << endl;
}

Alive::~Alive()
{
	delete _name;
}
