#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>


int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
        sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("01 Hello.flac"))
        return -1;
    sf::Sound sound;
    sf::Music music;
    if (!music.openFromFile("Dobry-den.ogg"))
        return -2;
    bool play=true;
    window.clear();
    sf::Texture texture;
    if (!texture.loadFromFile("minesweeper2.png"))
    {
        std::cout << "error..." << std::endl;
    }
    sf::Sprite c0, c1;
    c0.setTexture(texture);
/*    c0.setTextureRect(sf::IntRect(0, 0, 16, 16));
    c1.setTexture(texture);
    c1.setTextureRect(sf::IntRect(16, 0, 16, 16));
    c1.setPosition(sf::Vector2f(16.f, 0.f));
    */
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            sound.setBuffer(buffer);
            sound.play();
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
        {
            //music.play();
            sound.stop();
        }
/*    window.draw(c0);
    window.draw(c1);*/
    for (int i=0;i<10;i++)
        {
            int c=0;
            c=16*i;
            c0.setTexture(texture);
            c0.setTextureRect(sf::IntRect(c, 0, 16, 16));
            c1.setPosition(sf::Vector2f(c .f, 0.f));
            window.draw(c0);
        }
    
        
        play=false;
        window.display();
    }

    return 0;
}