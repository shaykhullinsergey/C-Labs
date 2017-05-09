#include "Vector2d.h"

#include <math.h>
#include <iostream>
using namespace std;

Vector2d::Vector2d()
{
	_x = 0;
	_y = 0;
}
Vector2d::Vector2d(double x, double y)
{
	_x = x;
	_y = y;
}
Vector2d::Vector2d(const Vector2d& vector)
{
	_x = vector._x;
	_y = vector._y;
}
Vector2d::~Vector2d()
{
	delete &_x, &_y;
}

double Vector2d::X() {
	return _x;
}
void Vector2d::X(double x) {
	_x = x;
}
double Vector2d::Y() {
	return _y;
}
void Vector2d::Y(double y) {
	_y = y;
}
double Vector2d::Modulus()
{
	return sqrt(_x * _x + _y * _y);
}
Vector2d * Vector2d::Add(Vector2d * other)
{
	return new Vector2d(
		_x + other->_x,
		_y + other->_y
	);
}
Vector2d * Vector2d::Substract(Vector2d * other)
{
	return new Vector2d(
		_x - other->_x,
		_y - other->_y
	);
}
void Vector2d::Display()
{
	cout << "Vector (" << _x << ", " << _y << ") modulus " << Modulus() << endl;
}


Vector2d & Vector2d::operator=(const Vector2d & right) {
	if (this == &right) {
		return *this;
	}
	_x = right._x;
	_y = right._y;
	return *this;
}
const bool operator==(const Vector2d & left, const Vector2d & right)
{
	return left._x == right._x && left._y == right._y;
}
const bool operator!=(const Vector2d & left, const Vector2d & right)
{
	return !(left == right);
}
const bool operator>(Vector2d & left, Vector2d & right)
{
	return left.Modulus() > right.Modulus();
}
const bool operator<(Vector2d & left, Vector2d & right)
{
	return left.Modulus() < right.Modulus();
}
const ostream & operator<<(ostream & output, Vector2d & a) {
	output << "Vector: " << a.X() << " + " << a.Y() << "i has a " << a.Modulus() << " modulus" << endl;
	return output;
}
const istream & operator>>(istream & input, Vector2d & a) {
	int x, y;
	input >> x >> y;
	a.X(x);
	a.Y(y);
	return input;
}