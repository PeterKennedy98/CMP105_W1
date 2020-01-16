#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect1.setSize(sf::Vector2f(100, 100));
	rect1.setPosition(100, 100);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(75, 75));
	rect2.setPosition(112.5, 112.5);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(50, 50));
	rect3.setPosition(125, 125);
	rect3.setFillColor(sf::Color::Blue);

	rect4.setSize(sf::Vector2f(80, 40));
	rect4.setFillColor(sf::Color::Green);

	circle.setRadius(50);
	circle.setPosition(600, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);
	
	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font.\n";
	}
	text.setFont(font);
	text.setPosition(10, 10);
	text.setString("Hello World!");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Green);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rect4.setPosition((pos.x - 80), (pos.y - 40));
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(circle);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}