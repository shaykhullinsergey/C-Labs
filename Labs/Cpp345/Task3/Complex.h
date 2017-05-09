#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double _real;
	double _img;
public:
	Complex();
	Complex(double, double);

	//Lab3
	Complex(const Complex &complex);
	~Complex();
	//

	double Real();
	void Real(double);

	double Img();
	void Img(double);

	double Modulus();
	void Display();


	//Lab4
	Complex& operator=(const Complex& right);

	friend const Complex& operator++(Complex& i);
	friend const Complex operator++(Complex& i, int);

	friend const Complex& operator--(Complex& i);
	friend const Complex operator--(Complex& i, int);

	friend const bool operator==(const Complex& left, const Complex& right);
	friend const bool operator!=(const Complex& left, const Complex& right);
	friend const bool operator>(Complex& left, Complex& right);
	friend const bool operator<(Complex& left, Complex& right);

	friend const ostream & operator<< (ostream & output, Complex & a);
	friend const istream & operator>> (istream & input, Complex & a);
	//
};

