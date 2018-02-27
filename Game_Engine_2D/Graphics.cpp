#include "Graphics.h"



Graphics::Graphics()
{
}

sf::Texture Graphics::textureBuf = sf::Texture();

void Graphics::GetSpriteStrip(std::vector<sf::Sprite> &sprites, const sf::Image &image, int spriteWidth,
	int spriteHeight, int rowNumber, int colNum, int numberOfSprites)
{

	for (int i = 0; i < numberOfSprites; i++)
	{
		textureBuf.loadFromImage(image);
		sf::Sprite s(textureBuf, sf::IntRect((i + colNum)*spriteWidth, (rowNumber * spriteHeight), spriteWidth, spriteHeight));
		s.setPosition(spriteWidth * i, 0);
		sprites.push_back(s);

	}
}


Graphics::~Graphics()
{
}
