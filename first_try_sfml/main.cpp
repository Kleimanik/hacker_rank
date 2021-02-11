#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>


int main()
{
    int BLOCK = 16;
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

/*        sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("01 Hello.flac"))
        return -1;
    sf::Sound sound;
    sf::Music music;
    if (!music.openFromFile("Dobry-den.ogg"))
        return -2;
    bool play=true;*/
    int pos;
    window.clear();/*
    sf::Texture texture;
    if (!texture.loadFromFile("minesweeper2.png"))
    {
        std::cout << "error..." << std::endl;
    }
    sf::Sprite c0, c1;
    c0.setTexture(texture);
    c0.setTextureRect(sf::IntRect(0, 0, 16, 16));
    c1.setTexture(texture);
    c1.setTextureRect(sf::IntRect(16, 0, 16, 16));
    c1.setPosition(sf::Vector2f(16.f, 0.f));*/
    
    while (window.isOpen())
    {
        //while (sf::Mouse::isButtonPressed(sf::Mouse::Right))
        //{
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        /*if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            sound.setBuffer(buffer);
            sound.play();
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
        {
            //music.play();
            sound.stop();
        }*/
        window.clear();
/*    window.draw(c0);
    window.draw(c1);*/
    int a;
    for (int j=0;j<10;j++)
    {
        for (int i=0;i<10;i++)
        {
            if(i%2==0)
            {
                a = (j%2) > 0 ? 4 : 6;
                std::cout << a <<std::endl;
                //c1.setPosition(sf::Vector2f(i*BLOCK, j*BLOCK));
                //window.draw(c1);
            }
            else
            {
                //c0.setPosition(sf::Vector2f(i*BLOCK, j*BLOCK));
                //window.draw(c0);
            }
            
        }
    }
    
        
        //play=false;
        window.display();
    }
    //}

    return 0;
}