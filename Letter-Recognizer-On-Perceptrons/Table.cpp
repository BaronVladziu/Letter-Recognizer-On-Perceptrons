#include "header.h"
#include "Table.h"

Table::Table(int width, int height)
	: _width(width), _height(height)
{
	_table.reset(new std::unique_ptr<bool[]>[width]);
	for (int i = 0; i < width; i++)
	{
		_table[i].reset(new bool[height]);
	}
	clear();
}
int Table::get_width() const
{
	return _width;
}
int Table::get_height() const
{
	return _height;
}
bool Table::get_value(int x, int y) const
{
	if (x >= 0 && x < _width && y >= 0 && y < _height)
	{
		return _table[x][y];
	}
	else
	{
		return false;
	}
}
void Table::set_value(int x, int y, bool value)
{
	if (x >= 0 && x < _width && y >= 0 && y < _height)
	{
		if (_table[x][y] != value)
		{
			_table[x][y] = value;
		}
	}
}
void Table::clear()
{
	for (int i = 0; i < _width; i++)
	{
		for (int j = 0; j < _height; j++)
		{
			_table[i][j] = 0;
		}
	}
}
Table::~Table()
{}