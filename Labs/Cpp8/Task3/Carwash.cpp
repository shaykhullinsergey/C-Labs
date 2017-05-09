#include "Carwash.h"



Carwash::Carwash()
{
	_num = 0;
}
void Carwash::AddOrder(Order * order)
{
	order->Num(_num++);
		
	_orders.push(order);
}
bool Carwash::WashNext()
{
	if (_orders.empty())
		return false;
	Order* order = _orders.front();
	_orders.pop();
	order->CheckAsComplete();
	order->Display();
		
	return true;
}


Carwash::~Carwash()
{
	delete &_orders;
}
