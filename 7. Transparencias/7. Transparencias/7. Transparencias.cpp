#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture texture;
Sprite sprite;
Texture texture2;
Sprite sprite2;

int main() {

	texture.loadFromFile("rcircle.png");
	sprite.setTexture(texture);

	texture2.loadFromFile("puntoazul.png");
	sprite2.setTexture(texture2);
	sprite2.setScale(0.2, 0.2);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"ventana");

	sprite2.setOrigin(sprite2.getLocalBounds().width / 2, sprite2.getLocalBounds().height / 2);
	sprite2.setPosition(400,300);

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

		App.draw(sprite2);

		App.display();
	}
	return 0;
}