#pragma once
#include "header.h"

class Table
{
	std::unique_ptr<std::unique_ptr<bool[]>[]> _table;
	int _width;
	int _height;

public:
	Table(int width, int height);
	int get_width() const;
	int get_height() const;
	bool get_value(int x, int y) const;
	void set_value(int x, int y, bool value);
	void clear();
	~Table();
};