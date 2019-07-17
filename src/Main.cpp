#include "SFML/Graphics.hpp"
#include "Story.h"
#include<iostream>
#include <vector>
#include "CharacterCreation.h"
#include <fstream>
#include <filesystem>
#include "Opening.h"

using namespace sf;



int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 400), "Lost World");
	Opening openingBackground;
	window.setVerticalSyncEnabled(true);
	openingBackground.basicBg(window);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			
			
		}

		
		window.setKeyRepeatEnabled(false);
		openingBackground.drawBg(window);
		openingBackground.drawText(window);
		openingBackground.drawStart(window);
		window.display();
			

	}

	return 0;
}
