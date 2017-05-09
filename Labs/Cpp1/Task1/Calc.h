#pragma once
#include "Complex.h"

namespace Lab1 {
	class Calc {
	public:
		Complex* Add(Complex* a, Complex* b);
		Complex* Subs(Complex* a, Complex* b);
		Complex* Mult(Complex* a, Complex* b);
		bool Equals(Complex* a, Complex* b);
	};
}


