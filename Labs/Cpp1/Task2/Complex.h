#pragma once

namespace Lab1 {
	class Complex {
	private:
		double _real;
		double _img;
	public:
		Complex(double r, double i);

		double Real();
		void Real(double real);

		double Img();
		void Img(double img);

		double Modulus();
	};
}