#pragma once
class Tiles {
	public:
		char* Brand;
		double Height;
		double Width;
		double Price;

		Tiles();
		Tiles(char* brand, double height, double width, double price);

		//Lab3
		Tiles(const Tiles &tile);
		~Tiles();
		//

		void Display();
};

