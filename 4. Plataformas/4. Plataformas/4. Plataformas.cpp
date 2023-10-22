#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture;
Sprite sprite;

int main() {

	texture.loadFromFile("plataforma.jpg");
	sprite.setTexture(texture);
	texture.setSmooth(true);

	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"ventana");

	sprite.setScale(0.15, 0.4);

	while (App.isOpen())
	{
		App.clear();

		for (int i = 0; i < 8; i++) 
		{
			sprite.setPosition(i * (25 * 2), 800 - 25 * i);
			sprite.setScale(0.1, 0.1 * i);
			App.draw(sprite);
		}

		sprite.setPosition(8 * 25 * 2,800 - 25 * 7);
		sprite.setScale(1.5,0.1);
		App.draw(sprite);


		App.display();
	}
}
