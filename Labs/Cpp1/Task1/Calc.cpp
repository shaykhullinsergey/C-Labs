#include "Calc.h"

namespace Lab1 {
	Complex* Calc::Add(Complex* a, Complex* b) {
		return new Complex( 
			a->Real() + b->Real(), 
			a->Img() + b->Img()
		);
	}

	Complex* Calc::Subs(Complex* a, Complex* b) {
		return new Complex(
			a->Real() - b->Real(),
			a->Img() - b->Img()
		);
	}

	Complex* Calc::Mult(Complex* a, Complex* b) {
		return new Complex(
			a->Real() * b->Real() - a->Img() * b->Img(),
			a->Real() * b->Img() + b->Real() * a->Img()
		);
	}

	bool Calc::Equals(Complex* a, Complex* b)
	{
		return a->Real() == b->Real() && a->Img() == b->Real();
	}
}