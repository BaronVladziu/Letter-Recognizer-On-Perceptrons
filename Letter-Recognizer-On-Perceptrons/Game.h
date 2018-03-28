#pragma once
#include "header.h"
#include "Scene.h"
#include "NeuralNetwork.h"
#include "SignBase.h"

class Game
{
	bool _ifWaitForSign;
	char _sign;
	E_NID _answer;
	sf::RenderWindow _window;
	SignBase _signbase;
	Scene _scene;
	NeuralNetwork _ann;

	void events(sf::Event event);
	void logic();
	void drawing();

public:
	Game();
	void loop();
	~Game();
};