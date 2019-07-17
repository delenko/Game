#include "Opening.h"

#include <iostream>

Opening::Opening() {
	
	if (!bgImageOne.loadFromFile("parallax-mountain-bg.png")){
		std::cout << "Error Loading Texture!" << std::endl;
	};
	backgroundImageOne.setTexture(bgImageOne);
	if(!bgImageTwo.loadFromFile("parallax-mountain-foreground-trees.png")) {
		std::cout << "Error Loading Texture!" << std::endl;
	};
	backgroundImageTwo.setTexture(bgImageTwo);

	if (!bgImageThree.loadFromFile("parallax-mountain-montain-far.png")) {
		std::cout << "Error Loading Texture!" << std::endl;
	};
	backgroundImageThree.setTexture(bgImageThree);
	if (!bgImageFour.loadFromFile("parallax-mountain-mountains.png")) {
		std::cout << "Error Loading Texture!" << std::endl;
	};
	backgroundImageFour.setTexture(bgImageFour);
	if(!bgImageFive.loadFromFile("parallax-mountain-trees.png")){
		std::cout << "Error Loading Texture!" << std::endl;
	};
	backgroundImageFive.setTexture(bgImageFive);
	if (!openingText.loadFromFile("Retro_Gaming.ttf")) {
		std::cout << "Error Loading Font!" << std::endl;
	}
	textHold.setFont(openingText);
	if (!openingStart.loadFromFile("Retro_Gaming.ttf")) {
		std::cout << "Error Loading Font!" << std::endl;
	}
	startButton.setFont(openingStart);
}
Opening::~Opening() {

}
void Opening::basicBg(sf::RenderWindow& windows) {
	backgroundImageOne.setPosition(sf::Vector2f(0, 0));
	windows.draw(backgroundImageOne);
}

void Opening::drawBg(sf::RenderWindow& windows) {
	
		backgroundImageTwo.setPosition(sf::Vector2f(0, 0));
		windows.draw(backgroundImageTwo);
		backgroundImageThree.setPosition(sf::Vector2f(0, 0));
		windows.draw(backgroundImageThree);
		backgroundImageFour.setPosition(sf::Vector2f(0, 0));
		windows.draw(backgroundImageFour);
		backgroundImageFive.setPosition(sf::Vector2f(0, 0));
		windows.draw(backgroundImageFive);
		
}
void Opening::drawText(sf::RenderWindow& windows) {
	textHold.setCharacterSize(36);
	textHold.setFillColor(sf::Color(1,0,0,25));
	textHold.setPosition(sf::Vector2f(175, 75));
	textHold.setString("Lost World");
	windows.draw(textHold);
}
void Opening::drawStart(sf::RenderWindow& windows) {
	startButton.setCharacterSize(24);
	startButton.setOutlineColor(sf::Color(255,255,255,0));
	startButton.setPosition(sf::Vector2f(150, 250));
	startButton.setString("Press Enter to Play!");
	windows.draw(startButton);
}

