#include <SFML/Graphics/RectangleShape.hpp>
#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow hallnhalf(sf::VideoMode(800,600),"sfml_hallnknight",sf::Style::Resize | sf::Style::Close);
	sf::RectangleShape player;
	sf::RectangleShape player1;
	player.setSize(sf::Vector2f(100.f,100.f));
	player1.setSize(sf::Vector2f(200.f,100.f));
	player1.setFillColor(sf::Color(255,3,129,005));
	player.setOutlineColor(sf::Color(123,12,99,225));
	player.setOutlineThickness(90);
	player.setFillColor(sf::Color::Green);
	player.setPosition(400,300);
	player.setOrigin(50,50);
	player.rotate(30);
	player1.rotate(-40);
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
		}
		hallnhalf.clear();
		hallnhalf.draw(player);
		hallnhalf.draw(player1);
		hallnhalf.display();
	}
	return 0;
}
