#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>
#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow hallnhalf(sf::VideoMode(1920,1080),"sfml_hallnknight",sf::Style::Resize | sf::Style::Close);
	sf::RectangleShape player;
	player.setSize(sf::Vector2f(500.f,500.f));
	player.setOutlineColor(sf::Color(123,12,99,225));
//	player.setOutlineThickness(40);
//	player.setFillColor(sf::Color::Green);
	player.setPosition(960,540);
	player.setOrigin(250,250);
	sf::Texture texture;
	texture.loadFromFile("/home/hallnkight/Arco_linux_dot/neofetch/medallion-bronze.png");
	texture.loadFromFile("unnamed.jpg");
	player.setTexture(&texture);
//	player.rotate(30);
//	player.setScale(1.5,1);
	while(hallnhalf.isOpen())
	{
		sf::Event EVNT;
		while(hallnhalf.pollEvent(EVNT))
		{
			if(EVNT.type == sf::Event::Closed)
			{
				hallnhalf.close(); 
			}
			if(EVNT.type == sf::Event::KeyPressed)
			{
				std::cout<<"key is pressed"<<std::endl;
			}
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			player.move(0,-0.1f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
		{
			player.move(0,-0.1f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player.move(0,0.1f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
		{
			player.move(0,0.1f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player.move(0.1f,0.f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
		{
			player.move(0.1f,0.f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player.move(-0.1f,0.f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
		{
			player.move(-0.1f,0.f);
		}
		hallnhalf.clear(sf::Color(25,48,160,255));
		hallnhalf.draw(player);
		hallnhalf.display();
	}
	return 0;
}
