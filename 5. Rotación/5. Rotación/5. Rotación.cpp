#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture texture;
Sprite sprite;

int main() {

	texture.loadFromFile("plataforma.jpg");
	sprite.setTexture(texture);


	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"ventana");

	sprite.setPosition(400, 400);
	
	sprite.setOrigin(sprite.getLocalBounds().width / 2, sprite.getLocalBounds().height / 2);

	float rotation = 0;
	float rotationSpeed = 2;

	while (App.isOpen())
	{
		sprite.setRotation(rotation);
		rotation += rotationSpeed;
		sleep(sf::seconds(0.05));

		App.clear();
		App.draw(sprite);
		App.display();
	}
}