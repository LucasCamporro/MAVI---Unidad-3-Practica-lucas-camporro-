#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture;
Sprite sprite;

int main() {

	texture.loadFromFile("rcircle.png");

	sprite.setTexture(texture);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"ventana");


	while (App.isOpen())
	{
		App.clear();

		for (int i = 0; i < 2; i++) {
			sprite.setPosition(0, 0);
			App.draw(sprite);
			sprite.setPosition(670, 0);
			App.draw(sprite);
			sprite.setPosition(670, 470);
			App.draw(sprite);
			sprite.setPosition(0, 470);
			App.draw(sprite);

		}

		App.display();
	}
	return 0;
}