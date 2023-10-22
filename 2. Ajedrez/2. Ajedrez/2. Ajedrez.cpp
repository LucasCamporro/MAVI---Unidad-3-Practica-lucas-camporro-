#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture textureW;
Sprite spriteW;
Texture textureB;
Sprite spriteB;

int main() {

	float positiony = 0;

	textureW.loadFromFile("chessw.png");
	textureB.loadFromFile("chessb.png");

	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"ventana");

	int tableSize = 800 / 8;

	while (App.isOpen())
	{
		App.clear();

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if ((i + j) % 2 == 0)
				{
					spriteW.setTexture(textureW);
					spriteW.setPosition(i * tableSize, j * tableSize);
					App.draw(spriteW);
				}
				else
				{
					spriteB.setTexture(textureB);
					spriteB.setPosition(i * tableSize, j * tableSize);
					App.draw(spriteB);
				}

			}
		}
		App.display();
	}
}