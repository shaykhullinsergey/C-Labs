#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double r, double i) {
	_real = r;
	_img = i;
}
void Complex::Display() {
	cout << "Complex: " << _real << " + " << _img << "i " << endl;
}

Complex::~Complex() { }
