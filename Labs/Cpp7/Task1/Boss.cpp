#include "Boss.h"
#include <iostream>

using namespace std;

Boss::Boss() : Human() { 
	_workers = 0;
}
Boss::Boss(string fName, string mName, string lName, int age, int workers) : Human(fName, mName, lName, age) { 
	_workers = workers;
}
void Boss::Display() {
	cout << "Boss: " << _firstName 
		 << " " << _midName 
		 << " " << _lastName 
		 << " Age: " << _age
		 << " Workers: " << _workers
		 << endl;
}

Boss::~Boss() { 
	delete &_workers;
}
