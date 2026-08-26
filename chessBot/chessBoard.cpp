#include "chessBoard.hpp"


void drawChessBoard(sf::RenderWindow& window) {

    float tileSize = 80.f;
    float rowF = 0.f;
    float colF = 0.f;
    //tile colours
    sf::Color lightTile(230, 230, 230);
    sf::Color darkTile(80, 80, 80);
    bool isDark = true;

    for (int row = 0; row <= 7; row++) {
        for (int col = 0; col <= 7; col++) {
            //making the square
            sf::RectangleShape chessSquare(sf::Vector2f(tileSize, tileSize));
            //setting the square position
            rowF = static_cast<float>(row);
            colF = static_cast<float>(col);

            chessSquare.setPosition(sf::Vector2f(colF * tileSize, rowF * tileSize));

            if (isDark == true)
            {
                chessSquare.setFillColor(darkTile);
                isDark = !isDark;
            }
            else
            {
                chessSquare.setFillColor(lightTile);
                isDark = !isDark;
            }
            window.draw(chessSquare);
        }
        isDark = !isDark;
    }
}