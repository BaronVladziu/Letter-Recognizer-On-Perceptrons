#include "header.h"
#include "Game.h"
#include "SignBase.h"

void Game::events(sf::Event event)
{
	if (_ifWaitForSign == true)
	{
		if (event.type == sf::Event::KeyPressed && event.key.code != sf::Keyboard::LShift)
		{
			_sign = _signbase.get_char(event.key.code);
			_ifWaitForSign = false;
			std::cout << _sign << std::endl;
			E_NID cor_id = _signbase.get_NID(_sign);
			if (cor_id != E_NID_DontKnow)
			{
				_ann.teach(_scene.get_table(), cor_id);
				if (_answer == cor_id)
				{
					std::cout << "Wow! I was right! :3" << std::endl;
				}
				else
				{
					std::cout << "Ok, I'll remember that." << std::endl;
				}
			}
			else
			{
				std::cout << "That's not valid sign :c" << std::endl;
			}
			std::cout << std::endl;
			std::cout << "Draw me something else :)" << std::endl;
			std::cout << std::endl;
			_scene.clear_table();
		}
	}
	else
	{
		if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::C)
		{
			_scene.clear_table();
		}
		if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Middle)
		{
			_scene.clear_table();
		}
		if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Return)
		{
			_answer = _ann.execute(_scene.get_table());
			if (_answer == E_NID_DontKnow)
			{
				std::cout << "I don't know :c" << std::endl;
				std::cout << "What is it?" << std::endl;
			}
			else
			{
				std::cout << "It's: " << _signbase.get_char(_answer) << std::endl;
				std::cout << "Am I right?" << std::endl;
				std::cout << "Tell me what you drawn." << std::endl;
			}
			_ifWaitForSign = true;
		}
	}
}
void Game::logic()
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		_scene.set_value(sf::Mouse::getPosition(_window), 1);
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Right))
	{
		_scene.set_value(sf::Mouse::getPosition(_window), 0);
	}
}
void Game::drawing()
{
	_scene.draw(_window);
}

Game::Game()
	: _ifWaitForSign(false),
	_window(sf::VideoMode(500, 500), sf::String("Project Identifier")), _scene(100, 100), _ann(100, 100, _signbase.get_size())
{
	std::cout << "Hello! My name is Iddie and I'm a computer program." << std::endl;
	std::cout << "Draw me some letters or numbers." << std::endl;
	std::cout << "I'll do my best to recognize them." << std::endl;
	std::cout << "Here are some useful controls:" << std::endl;
	std::cout << "Press LMB to draw," << std::endl;
	std::cout << "Press RMB to erase," << std::endl;
	std::cout << "Press C to clear screen," << std::endl;
	std::cout << "Press Enter when you end drawing." << std::endl;
	std::cout << std::endl;
	std::cout << "Draw me something :)" << std::endl;
	std::cout << std::endl;
}
void Game::loop()
{
	while (_window.isOpen())
	{
		//eventy
		sf::Event event;
		while (_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				_window.close();
			}
			events(event);
		}
		if (_ifWaitForSign == false)
		{
			//logic
			logic();
			//drawing
			_window.clear();
			drawing();
			_window.display();
		}
	}
}
Game::~Game()
{}