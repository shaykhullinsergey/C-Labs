#include "Order.h"
#include <iostream>

using namespace std;

Order::Order(string name, int price) {
	_name = name;
	_price = price;
	_complete = false;
	_num = 0;
}
void Order::Display() {
	cout << "Order" << _num
		 << ": " << _name
		 << " Price: " << _price
		 << " Complete: " << (_complete ? "Complete" : "Not Complete")
		 << endl;
}
void Order::CheckAsComplete() {
	_complete = true;
}
void Order::Num(int num)
{
	_num = num;
}

Order::~Order() {
	delete &_name;
}
