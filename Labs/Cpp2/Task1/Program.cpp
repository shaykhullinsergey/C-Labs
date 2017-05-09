#include <string>
#include <iostream>
using namespace std;

string(*dateDelegate)(string);

string MorningGreeting(string name) {
	string greeting("Good morning, ");
	return greeting + name;
}

string DayGreeting(string name) {
	string greeting("Good afternoon, ");
	return greeting + name;
}

string EveningGreeting(string name) {
	string greeting("Good evening, ");
	return greeting + name;
}

string NightGreeting(string name) {
	string greeting("Good night, ");
	return greeting + name;
}

string name;
double time;

void main() {
	cout << "What is your name?";
	cin >> name;
	
	cout << "Enter a day time: ";
	cin >> time;

	if (time >= 0 && time <= 6) 
		dateDelegate = NightGreeting;
	else if (time > 6 && time < 12)
		dateDelegate = MorningGreeting;
	else if (time >= 12 && time <= 17) 
		dateDelegate = DayGreeting;
	else if (time > 17 && time <= 24) 
		dateDelegate = EveningGreeting;
	else {
		cout << "Value must be in [0 - 24] range";
		return;
	}

	cout << dateDelegate(name.c_str()) << endl;
}

