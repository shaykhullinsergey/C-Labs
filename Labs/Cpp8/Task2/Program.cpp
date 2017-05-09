#include "Complex.h"
#include <list>
using namespace std;

list<Complex*> l;

void main() {
	l.push_back(new Complex(3, 5));
	l.push_back(new Complex(1, -9));
	l.push_back(new Complex(-4, 2));
	l.push_back(new Complex(7, 5));
	l.push_back(new Complex(2, 8));

	for (Complex* ptr : l)
		ptr->Display();
}

