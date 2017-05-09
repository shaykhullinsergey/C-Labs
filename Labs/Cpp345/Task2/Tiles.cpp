#include "Tiles.h"
#include <iostream>
using namespace std;

Tiles::Tiles()
{
	Brand = nullptr;
	Height = 0;
	Width = 0;
	Price = 0;
}
Tiles::Tiles(char* brand, double height, double width, double price) {
	Brand = brand;
	Height = height;
	Width = width;
	Price = price;
}
Tiles::Tiles(const Tiles & tile)
{
	Brand = tile.Brand;
	Height = tile.Height;
	Width = tile.Width;
	Price = tile.Price;
}
Tiles::~Tiles()
{
	delete Brand;
}

void Tiles::Display() {
	cout << "Tile: " << Brand 
		 << " Height: " << Height 
		 << " Width: " << Width 
		 << " Price: " << Price 
		 << endl;
}
