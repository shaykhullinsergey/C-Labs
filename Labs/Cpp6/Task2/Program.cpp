#include "Alive.h"
#include "Bird.h"
#include "Fish.h"
#include "Animal.h"

Alive* alive;
Bird* bird = new Bird(
	"Pigeon", 
	"Winter"
);
Fish* fish = new Fish(
	"Shark", 
	20
);
Animal* animal = new Animal(
	"Cat", 
	"Meat"
);


void main() {
	bird->Move();
	bird->Eat();
	bird->Talk();
	bird->Display();

	fish->Move();
	fish->Eat();
	fish->Talk();
	fish->Display();

	animal->Move();
	animal->Eat();
	animal->Talk();
	animal->Display();

	//implicit casts
	alive = bird;
	alive->Move();

	alive = fish;
	alive->Talk();

	alive = animal;
	alive->Eat();

	alive = bird;
	alive->Display();
}

