#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
        sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
        
        sf::Music music;
        music.openFromFile("Dobry-den.ogg");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            
        }
        window.clear();
        window.draw(shape);
        music.play();
        window.display();
    }

    return 0;
}