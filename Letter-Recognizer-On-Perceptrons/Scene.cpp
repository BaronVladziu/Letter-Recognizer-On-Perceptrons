#include "header.h"
#include "Scene.h"

Scene::Scene(int width, int height)
	: _table(width, height), _brush_size(4.5f)
{}
void Scene::set_value(sf::Vector2i position, bool value)
{
	int x = (position.x - (position.x % _tile.get_size())) / _tile.get_size();
	int y = (position.y - (position.y % _tile.get_size())) / _tile.get_size();
	for (int i = 0; i <= _brush_size; i++)
	{
		for (int j = 0; j <= _brush_size; j++)
		{
			if (sqrt(pow(i, 2) + pow(j, 2)) <= _brush_size)
			{
				_table.set_value(x + i, y + j, value);
				_table.set_value(x - i, y + j, value);
				_table.set_value(x + i, y - j, value);
				_table.set_value(x - i, y - j, value);
			}
		}
	}
}
void Scene::clear_table()
{
	_table.clear();
}
const Table & Scene::get_table() const
{
	return _table;
}
void Scene::draw(sf::RenderWindow & window)
{
	for (int i = 0; i < _table.get_width(); i++)
	{
		for (int j = 0; j < _table.get_height(); j++)
		{
			if (_table.get_value(i, j) == true)
			{
				_tile.set_position(i*_tile.get_size(), j*_tile.get_size());
				_tile.set_value(true);
				_tile.draw(window);
			}
		}
	}
}
Scene::~Scene()
{}