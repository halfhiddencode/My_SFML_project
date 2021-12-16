#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>
#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
	int i=3,R=0,B,G;
	sf::RenderWindow hallnhalf(sf::VideoMode(800,600),"sfml_hallnknight",sf::Style::Resize | sf::Style::Close);
	sf::RectangleShape player;
	player.setSize(sf::Vector2f(100.f,100.f));
	player.setOutlineColor(sf::Color(123,12,99,225));
	player.setOutlineThickness(40);
	player.setFillColor(sf::Color::Green);
	player.setPosition(400,300);
	player.setOrigin(50,50);
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
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player.move(0,0.1f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player.move(0.1f,0.f);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player.move(-0.1f,0.f);
		}
		if(sf::Mouse::Wheel::HorizontalWheel)
		{
			player.rotate(20);
			i++;
			if(i<256&&R+3<=i)
			{
				player.setFillColor(sf::Color(i,0,0,255));
				R=i;
			}
			if(i<256&&i!=R)
			{
				player.setFillColor(sf::Color(R,i,0,255));
				G=i;
			}
			if(i<256&&i!=G)
			{
				player.setFillColor(sf::Color(R,G,i,255));
			}
			if(i>255)
				i=0;
		}
		hallnhalf.clear();
		hallnhalf.draw(player);
		hallnhalf.display();
	}
	return 0;
}
