#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow hallnhalf(sf::VideoMode(800,600),"sfml_hallnknight",sf::Style::Resize | sf::Style::Close);
	while(hallnhalf.isOpen())
	{
		sf::Event EVNT;
		while(hallnhalf.pollEvent(EVNT))
		{
			if(EVNT.type == sf::Event::Closed)
			{
				hallnhalf.close(); 
			}
			std::cout<<"hello avinash"<<std::endl;
			std::cout<<"hello avinash hallnknight"<<std::endl;
		}
	}
	return 0;
}
