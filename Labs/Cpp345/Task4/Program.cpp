#include "Vector2d.h"
#include <iostream>
using namespace std;

Vector2d* vector1 = new Vector2d(8, 4);
Vector2d* vector2 = new Vector2d(3, 7);
Vector2d* vector3;

void main() {
	vector3 = vector1->Add(vector2);

	cout << "Modulus: " << vector3->Modulus() << endl;
	vector3->Display();
}

