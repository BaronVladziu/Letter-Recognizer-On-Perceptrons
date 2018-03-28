#pragma once
#include "header.h"

class Tile
{
	int _size;
	sf::RectangleShape _shape;
	bool _value;

public:
	Tile();
	int get_size() const;
	void set_position(float x, float y);
	void set_value(bool value);
	void draw(sf::RenderWindow & window);
	~Tile();
};