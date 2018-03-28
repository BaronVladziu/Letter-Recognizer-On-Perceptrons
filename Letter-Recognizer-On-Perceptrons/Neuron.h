#pragma once
#include "header.h"

class Neuron
{
	std::unique_ptr<std::unique_ptr<int[]>[]> _wages;
	int _width;
	int _height;
	int _border_value;

	void reset_wages();

public:
	Neuron();
	void create_new(int width, int height);
	bool execute(const Table & table) const;
	void teach(const Table & table, bool last_decision, bool if_correct, int vel);
	~Neuron();
};