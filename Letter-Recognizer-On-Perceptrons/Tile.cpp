#include "header.h"
#include "Tile.h"

Tile::Tile()
	: _size(5), _shape(sf::Vector2f(_size, _size)), _value(false)
{
	_shape.setFillColor(sf::Color::Black);
}
int Tile::get_size() const
{
	return _size;
}
void Tile::set_position(float x, float y)
{
	_shape.setPosition(sf::Vector2f(x, y));
}
void Tile::set_value(bool value)
{
	if (_value != value)
	{
		if (value == true)
		{
			_shape.setFillColor(sf::Color::White);
		}
		else
		{
			_shape.setFillColor(sf::Color::Black);
		}
	}
}
void Tile::draw(sf::RenderWindow & window)
{
	window.draw(_shape);
}
Tile::~Tile()
{}