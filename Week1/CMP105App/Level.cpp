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

	circle.setRadius(50);
	circle.setPosition(600, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);
	
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
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
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