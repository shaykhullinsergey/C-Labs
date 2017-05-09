#include "Complex.h"
#include <fstream>
using namespace std;


namespace Lab1 {
	Complex::Complex(double r, double i) {
		Real(r);
		Img(i);
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
}