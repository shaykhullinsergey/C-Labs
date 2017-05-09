#include "Tiles.h"

Tiles* tile1;
Tiles* tile2;

void main() {
	//property
	tile1 = new Tiles();
	tile1->Brand = "Floorcraft";
	tile1->Height = 20;
	tile1->Width= 20;
	tile1->Price= 6;
	tile1->Display();

	//constructor
	tile2 = new Tiles("Flooring america", 25, 25, 9);
	tile2->Display();
}

