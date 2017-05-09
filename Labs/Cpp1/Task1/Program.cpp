#include "Calc.h"
#include "Complex.h"
#include "Program.h"

#include <iostream>
using namespace std;
using namespace Lab1;

Calc* calc = new Calc();
Complex* numA;
Complex* numB;
char operation;
int again;

void main() {
	do {
		system("cls");

		numA = InputFor("NumA");
		numB = InputFor("NumB");

		wcout << "Choose an operation: (+, -, *, =): ";
		cin >> operation;

		switch (operation) {
		case '+': ShowResult(calc->Add(numA, numB));
			break;
		case '-': ShowResult(calc->Subs(numA, numB));
			break;
		case '*': ShowResult(calc->Mult(numA, numB));
			break;
		case '=': ShowResult(calc->Equals(numA, numB));
			break;
		}
		delete numA, numB;

		cout << "0 - exit, 1 - again" << endl;;
		cin >> again;
	} while (again == 1);
}

Complex* InputFor(const char* name) {
	int realInput, imgInput;
	cout << "Enter " << name << " Real: ";
	cin >> realInput;
	cout << "Enter " << name << " Img: ";
	cin >> imgInput;
	return new Complex(realInput, imgInput);
}
void ShowResult(Complex* result) {
	cout << "Result: " << result->Real() << " + " << result->Img() << "i" << endl;
	delete result;
}
void ShowResult(bool result) {
	cout << "Result: " << (result ? "True" : "False") << endl;
}
