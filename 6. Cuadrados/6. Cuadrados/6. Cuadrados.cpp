#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture texture1;
Texture texture2;
Texture texture3;
Texture texture4;
Sprite sprite;

int main() {

	texture1.loadFromFile("cuad_red.png");
	texture2.loadFromFile("cuad_yellow.png");
	texture3.loadFromFile("cuad_blue.png");
	texture4.loadFromFile("chessb.png");


	sf::RenderWindow App(sf::VideoMode(500,500, 32),
		"ventana");

	sprite.setPosition(100, 100);

	while (App.isOpen())
	{
		App.clear();
		sprite.setTexture(texture1);
		sprite.setPosition(0,0);
		App.draw(sprite);
		sprite.setTexture(texture2);
		sprite.setPosition(250, 0);
		App.draw(sprite);
		sprite.setTexture(texture3);
		sprite.setPosition(0,250);
		App.draw(sprite);
		sprite.setTexture(texture4);
		sprite.setPosition(250,250);
		App.draw(sprite);
		App.display();
	}
}