#pragma once


class Child {
	private:
		char* _firstName;
		char* _lastName;
		unsigned _age;
	public:
		Child();
		Child(char* name, char* lastName, int age);

		//Lab3
		Child(const Child &child);
		~Child();
		//

		void FirstName(char*);
		char* FirstName();

		void LastName(char*);
		char* LastName();

		void Age(int);
		int Age();

		void Display();
};

