#include "Carwash.h"
#include "Order.h"
#include <iostream>

using namespace std;

Carwash* carWash = new Carwash();

void main() {
	carWash->AddOrder(new Order("Test1", 100));
	carWash->AddOrder(new Order("Test2", 200));
	carWash->AddOrder(new Order("Test3", 300));
	carWash->AddOrder(new Order("Test4", 400));
	carWash->AddOrder(new Order("Test5", 500));

	while (carWash->WashNext()) 
		cout << "Waiting for next car..." << endl << endl;
	
	cout << "Done!" << endl;
}

