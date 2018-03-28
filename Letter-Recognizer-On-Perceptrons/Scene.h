#pragma once
#include "header.h"
#include "Tile.h"
#include "Table.h"

class Scene
{
	Tile _tile;
	Table _table;
	float _brush_size;

public:
	Scene(int width, int height);
	void set_value(sf::Vector2i position, bool value);
	void clear_table();
	const Table & get_table() const;
	void draw(sf::RenderWindow & window);
	~Scene();
};