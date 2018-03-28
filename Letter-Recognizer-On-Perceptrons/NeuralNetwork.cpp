#include "header.h"
#include "NeuralNetwork.h"
#include "Neuron.h"

NeuralNetwork::NeuralNetwork(int width, int height, int NID_size)
	: _vel(1)
{
	for (int i = 0; i < NID_size; i++)
	{
		_neurons.push_back(std::unique_ptr<Neuron>(new Neuron()));
		_neurons[i]->create_new(width, height);
		_vector.push_back(false);
	}
}
E_NID NeuralNetwork::execute(const Table & table)
{
	int counter = 0;
	int nr = 0;
	for (unsigned int i = 0; i < _neurons.size(); i++)
	{
		_vector[i] = _neurons[i]->execute(table);
		if (_vector[i] == true)
		{
			counter++;
			nr = i;
		}
	}
	if (counter == 1)
	{
		return E_NID(nr);
	}
	else
	{
		return E_NID_DontKnow;
	}
}
void NeuralNetwork::teach(const Table & table, E_NID correct)
{
	for (unsigned int i = 0; i < _neurons.size(); i++)
	{
		if (correct == i)
		{
			if (_vector[i] == false)
			{
				_neurons[i]->teach(table, _vector[i], false, _vel);
			}
			else
			{
				_neurons[i]->teach(table, _vector[i], true, _vel);
			}
		}
		else
		{
			if (_vector[i] == true)
			{
				_neurons[i]->teach(table, _vector[i], false, _vel);
			}
		}
	}
}
NeuralNetwork::~NeuralNetwork()
{}