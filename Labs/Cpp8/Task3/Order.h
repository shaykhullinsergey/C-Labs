#pragma once
#include <string>

using namespace std;

class Order {
private:
	string _name;
	int _price;
	bool _complete;
	int _num;
public:
	Order(string, int);
	void Display();
	void CheckAsComplete();
	void Num(int);
	~Order();
};

