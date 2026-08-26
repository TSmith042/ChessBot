#include "main.h"

int main()
{  
    //setting window size
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "fullscreen");
    
    //drawing to screen
    while (window.isOpen())
    {

        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        drawChessBoard(window);
        window.display();

    }
}

