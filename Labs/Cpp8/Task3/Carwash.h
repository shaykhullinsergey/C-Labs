#pragma once
#include "Order.h"
#include <queue>

class Carwash {
private:
	queue<Order*> _orders;
	int _num;
public:
	Carwash();
	void AddOrder(Order* order);
	bool WashNext();
	~Carwash();
};

