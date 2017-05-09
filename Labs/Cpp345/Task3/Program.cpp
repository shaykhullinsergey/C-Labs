#include "Complex.h"
#include <iostream>
using namespace std;

Complex* num1;
Complex* num2;

void main() {
	//property
	num1 = new Complex();
	num1->Real(6);
	num1->Img(8);
	cout << "Modulus: " << num1->Modulus() << endl;
	num1->Display();

	//constructor
	num2 = new Complex(12, 7);
	cout << "Modulus: " << num2->Modulus() << endl;
	num2->Display();
}

