#pragma once
#include "Types.h"
#include <SFML\Graphics.hpp>
#include <vector>
class Graphics
{
private:
		static sf::Texture textureBuf;
public:
	static void GetSpriteStrip(std::vector<sf::Sprite> &sprites, const sf::Image &image, int spriteWidth,
		int spriteHeight, int rowNumber, int colNum, int numberOfSprites);


	Graphics();
	~Graphics();
};

