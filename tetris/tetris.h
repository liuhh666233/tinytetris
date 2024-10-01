#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

using UINT = std::uint32_t;
class Tetris
{
    static const UINT lines{20};
    static const UINT cols{10};
    static const UINT squares{4};
    static const UINT shapes{4};

    std::vector<std::vector<UINT>> area;
    std::vector<std::vector<UINT>> forms;

    struct Coords
    {
        /* data */
        UINT x, y;
    } z[squares], k[squares];

    std::shared_ptr<sf::RenderWindow> window;
    sf::Texture tiles, bg;
    std::shared_ptr<sf::Sprite> sprite, backgroud;
    sf::Clock clock;
    sf::Font font;
    sf::Text txtScore, txtGameOver;
    int dirx, color, score;
    bool rotate, gameover;
    float timercount, delay;

protected:
    void events();
    void draw();
    void moveToDown();
    void setRotate();
    void resetValues();
    void changePosition();
    bool maxLimit();
    void setScore();

public:
    Tetris();
    void run();
};