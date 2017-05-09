#include <iostream>
using namespace std;

typedef int* (*Delegate)(int*);

int* Reverse(int* arr) {
	cout << "Reverse: ";
	int temp, count = 10;
	for (int i = 0; i < count / 2; i++) {
		temp = arr[count - i - 1];
		arr[count - i - 1] = arr[i];
		arr[i] = temp;
	}
	return arr;
}

int* OrderBy(int* arr) {
	cout << "OrderBy: ";
	int temp = 0, count = 10;

	for (int i = 0; i < count; i++) {
		for (int j = count - 1; j > i; j--) {
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}

int* OrderByDescending(int* arr) {
	cout << "OrderByDescending: ";
	return Reverse(OrderBy(arr));
}

Delegate GetFunc(int* arr) {
	int count = 10;

	int sum = 0, first = arr[0];

	for (int i = 1; i < count; i++) 
		sum += arr[i];

	if (first == sum)
		return Reverse;
	else if (sum > first)
		return OrderBy;
	else
		return OrderByDescending;
}

void main() {
	int* arr = new int[10] { 20, 2, 3, 4, 5 ,6, 0, 0, 0, 0 }; //19, 20, 21

	Delegate foo = GetFunc(arr);

	int* bar = foo(arr);

	for (int i = 0; i < 10; i++)
		cout << bar[i] << " ";
	cout << endl;
}

