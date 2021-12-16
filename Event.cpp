#include <SFML/Window/WindowStyle.hpp>
#include<iostream>
#include<SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main()
{
	RenderWindow window(VideoMode(900,600),"EventTest",Style::Titlebar | Style::Resize | Style::Close);
	while(window.isOpen())
	{
		Event EVNT;
		while(window.pollEvent(EVNT))
		{
			if(EVNT.type == Event::Resized)
			{
				cout<<"hi avi"<<endl;
			}
			if(EVNT.type == Event::Closed)
			{
				window.close();
			}
			if(EVNT.type == Event::KeyPressed)
			{
				cout<<"key is pressed"<<endl;	
			}
			if(EVNT.type == Event::MouseMoved)
			{
				cout<<"mouse pointer is moving"<<endl;
			}		
		}
	}
	return 0;
}
