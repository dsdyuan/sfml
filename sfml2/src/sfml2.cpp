#include <SFML/Graphics.hpp>

#include "Hero.h"


sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello SFML Game !!!", sf::Style::Default);

sf::Vector2f playerPosition;
bool playerMoving = false;
bool playerDir = false;

sf::Texture skyTexture;
sf::Sprite skySprite;

sf::Texture bgTexture;
sf::Sprite bgSprite;

Hero hero;

void init() {

	skyTexture.loadFromFile("Assets/graphics/sky.png");
	skySprite.setTexture(skyTexture);

	bgTexture.loadFromFile("Assets/graphics/bg.png");
	// Create Sprite and Attach a Texture
	bgSprite.setTexture(bgTexture);
	hero.init("Assets/graphics/hero.png",
			sf::Vector2f(viewSize.x * 0.25f, viewSize.y * 0.5f), 200);

}

void updateInput() {

	sf::Event event;
	// while there are pending events...
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::KeyPressed) {
			if (event.key.code == sf::Keyboard::Up) {
				hero.jump(750.0f);
			}
		}
		if (event.key.code == sf::Keyboard::Escape
				|| event.type == sf::Event::Closed)
			window.close();
	}

}

void update(float dt) {
	hero.update(dt);
}

void draw() {

	window.draw(skySprite);
	window.draw(bgSprite);
	window.draw(hero.getSprite());

}

int main() {

	sf::Clock clock;
	window.setFramerateLimit(60);
	init();
	while (window.isOpen()) {
		updateInput();
		sf::Time dt = clock.restart();
		update(dt.asSeconds());
		window.clear(sf::Color::Red);
		draw();
		window.display();
	}

	return 0;
}
