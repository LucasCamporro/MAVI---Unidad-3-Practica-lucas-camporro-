#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture;
Sprite sprite;

int main() {

	texture.loadFromFile("fondo.jpg");
	sprite.setTexture(texture);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"ventana");


	while (App.isOpen())
	{
		App.clear();

		Vector2u imageSize = texture.getSize();

		Vector2u screenSize =  App.getSize();

		float xScale = screenSize.x / imageSize.x;
		float yScale = screenSize.y / imageSize.y;

		sprite.setScale(xScale,yScale);
		App.draw(sprite);

		App.display();
	}
}
