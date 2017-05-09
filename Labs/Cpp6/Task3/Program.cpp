#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

#include <iostream>
using namespace std;

Animal* animal;
Cat* cat = new Cat(
	"CatName", 
	"Funny", 
	4, 
	false
);
Dog* dog = new Dog(
	"DogName", 
	"Happy", 
	3, 
	true
);

void main() {
	cat->Move();
	cat->Talk();
	cat->Cry();
	cat->Eat();
	cat->Sleep(24); //can't play
	cat->Display();

	cout << endl;

	dog->Move();
	dog->Talk();
	dog->Cry();
	dog->Eat();
	dog->Play(5); //can't sleep
	dog->Display();

	cout << endl;
	
	animal = cat;
	animal->Move();
	animal->Talk();
	animal->Cry();
	animal->Eat();
	//animal->Sleep(24); //base class has no Sleep method
	//animal->Play(5);	 //same
	animal->Display();

	cout << endl;

	animal = dog;
	animal->Move();
	animal->Talk();
	animal->Cry();
	animal->Eat();
	//animal->Sleep(24); 
	//animal->Play(5);
	animal->Display();
}

