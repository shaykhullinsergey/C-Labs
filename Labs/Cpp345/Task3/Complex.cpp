#include "Complex.h"
#include <math.h>
#include <iostream>

using namespace std;

Complex::Complex()
{
	_real = 0;
	_img = 0;
}
Complex::Complex(double r, double i)
{
	_real = r;
	_img = i;
}
Complex::Complex(const Complex & complex)
{
	_real = complex._real;
	_img = complex._img;
}
Complex::~Complex()
{
	// unmanaged??
}

double Complex::Real() {
	return _real;
}
void Complex::Real(double real) {
	_real = real;
}
double Complex::Img() {
	return _img;
}
void Complex::Img(double img) {
	_img = img;
}
double Complex::Modulus() {
	return sqrt(Real() * Real() + Img() * Img());
}
void Complex::Display() {
	cout << "Complex: " << Real() 
		 << " + " << Img() 
		 << "i has a " << Modulus()
		 << " modulus" 
		 << endl;
}

Complex & Complex::operator=(const Complex & right) {
	if (this == &right) {
		return *this;
	}
	_real = right._real;
	_img = right._img;
	return *this;
}
const Complex & operator++(Complex & i)
{
	return Complex(i.Real() + 1, i.Img());
}
const Complex operator++(Complex & i, int)
{
	return Complex(i.Real() + 1, i.Img());
}
const Complex & operator--(Complex & i)
{
	return Complex(i.Real() - 1, i.Img());
}
const Complex operator--(Complex & i, int)
{
	return Complex(i.Real() - 1, i.Img());
}
const bool operator==(const Complex & left, const Complex & right)
{
	return left._real == right._real && left._img == right._img;
}
const bool operator!=(const Complex & left, const Complex & right)
{
	return !(left == right);
}
const bool operator>(Complex & left, Complex & right)
{
	return left.Modulus() > right.Modulus();
}
const bool operator<(Complex & left, Complex & right)
{
	return left.Modulus() < right.Modulus();
}
const ostream & operator<<(ostream & output, Complex & a)
{
	output << "Complex: " << a.Real() << " + " << a.Img() << "i has a " << a.Modulus() << " modulus" << endl;
	return output;
}
const istream & operator>>(istream & input, Complex & a)
{
	int r, i;
	input >> r >> i;
	a.Real(r);
	a.Img(i);
	return input;
}
