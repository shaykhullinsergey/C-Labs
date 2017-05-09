#include <fstream>
#include <iostream>
#include "Complex.h"

using namespace std;
using namespace Lab1;

ifstream file("data.txt");
int amount, real, img;
Complex* max;
Complex* curr;

void main()
{
	if (!file.is_open()) {
		cout << "File not found";
		return;
	}

	cout << "Reading: data.txt" << endl;
	file >> amount;

	file >> real;
	file >> img;
	max = new Complex(real, img);

	for (int i = 1; i < amount; i++) {
		file >> real;
		file >> img;
		curr = new Complex(real, img);
		if (curr->Modulus() > max->Modulus()) {
			delete max;
			max = curr;
		} else {
			delete curr;
		}
	}
	cout << "Max modulus: " << max->Modulus() << endl;
	cout << "Max complex: " << max->Real() << " + " << max->Img() << "i" << endl;
}

