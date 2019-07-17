#pragma once
#include "SFML/Graphics.hpp"

class Opening
	
{
	
public:
	Opening();
	~Opening();
	void drawBg(sf::RenderWindow &windows);
	void basicBg(sf::RenderWindow& windows);
	void drawText(sf::RenderWindow& windows);
	void drawStart(sf::RenderWindow& windows);
	
private:
	sf::Texture bgImageFive;
	sf::Texture bgImageFour;
	sf::Texture bgImageThree;
	sf::Texture bgImageTwo;
	sf::Texture bgImageOne;
	sf::Sprite backgroundImageOne;
	sf::Sprite backgroundImageTwo;
	sf::Sprite backgroundImageThree;
	sf::Sprite backgroundImageFour;
	sf::Sprite backgroundImageFive;
	sf::Font openingText;
	sf::Font openingStart;
	sf::Text textHold;
	sf::Text startButton;
};

