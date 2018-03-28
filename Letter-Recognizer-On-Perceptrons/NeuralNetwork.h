#pragma once
#include "header.h"
#include "Neuron.h"
#include "SignBase.h"

class NeuralNetwork
{
	std::vector<std::unique_ptr<Neuron>> _neurons;
	std::vector<bool> _vector;
	int _vel;

public:
	NeuralNetwork(int width, int height, int NID_size);
	E_NID execute(const Table & table);
	void teach(const Table & table, E_NID correct);
	~NeuralNetwork();
};