#pragma once
#include <iostream>
using namespace std;

class Vector2d
{
private:
	double _x;
	double _y;

public:
	//Lab2
	Vector2d();
	Vector2d(double x, double y);

	double X();
	void X(double);

	double Y();
	void Y(double);

	Vector2d* Add(Vector2d* other);
	Vector2d* Substract(Vector2d* other);

	double Modulus();
	void Display();
	//

	//Lab3
	Vector2d(const Vector2d &vector);
	~Vector2d();
	//

	//Lab4
	Vector2d& operator=(const Vector2d& right);

	friend const bool operator==(const Vector2d& left, const Vector2d& right);
	friend const bool operator!=(const Vector2d& left, const Vector2d& right);
	friend const bool operator>(Vector2d& left, Vector2d& right);
	friend const bool operator<(Vector2d& left, Vector2d& right);

	friend const ostream & operator<< (ostream & output, Vector2d & a);
	friend const istream & operator>> (istream & input, Vector2d & a);
	//
};

