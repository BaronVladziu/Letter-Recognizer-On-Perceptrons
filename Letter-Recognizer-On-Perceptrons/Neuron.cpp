#include "header.h"
#include "Neuron.h"
#include "Table.h"

void Neuron::reset_wages()
{
	for (int i = 0; i < _width; i++)
	{
		for (int j = 0; j < _height; j++)
		{
			_wages[i][j] = rand() % 10;
		}
	}
}

Neuron::Neuron()
	: _border_value(10000)
{}
void Neuron::create_new(int width, int height)
{
	_width = width;
	_height = height;
	_wages.reset(new std::unique_ptr<int[]>[width]);
	for (int i = 0; i < width; i++)
	{
		_wages[i].reset(new int[height]);
	}
	reset_wages();
}
bool Neuron::execute(const Table & table) const
{
	int value = 0;
	for (int i = 0; i < _width; i++)
	{
		for (int j = 0; j < _height; j++)
		{
			value += table.get_value(i, j)*_wages[i][j];
		}
	}
	return (value >= _border_value);
}
void Neuron::teach(const Table & table, bool last_decision, bool if_correct, int vel)
{
	for (int i = 0; i < _width; i++)
	{
		for (int j = 0; j < _height; j++)
		{
			if (table.get_value(i, j) == 1)
			{
				if (if_correct == false)
				{
					if (last_decision == false)
					{
						_wages[i][j] += vel;
					}
					else
					{
						_wages[i][j] -= vel;
					}
				}
			}
		}
	}
}
Neuron::~Neuron()
{}