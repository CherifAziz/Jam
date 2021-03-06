/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** display_background
*/

#include "../include/main.hpp"

bool is_integer(float k)
{
  return std::floor(k) == k;
}

void background(Game *my_game, sprite *Sprite)
{
    Sprite->background.loadFromFile("rsc/background.png");
    Sprite->fond.setTexture(Sprite->background, NULL);
    Sprite->fond2.setTexture(Sprite->background, NULL);
}

void display_background(Game *my_game, sprite *sprite)
{
    //sf::Font myfont;
    //if (!myfont.loadFromFile("arial.ttf"));
    // sf::Text mytext;
    // //mytext.setFont(myfont);
    // std::stringstream point;
    // point << my_game->score; 
    // mytext.setString(point.str().c_str());
    // mytext.setFillColor(sf::Color::Red);
    // mytext.setCharacterSize(30);
    // if ((is_integer(my_game->elapsed.asMilliseconds() / 20) == true )) {
    //     for (float i = 0; i < 50; i = i + 0.5) {
    //         if (floor(i) == i)
    //             std::cout << i << " Is a whole\n";
    //         else
    //             std::cout << i << " Not a whole\n";
    //     }
    // }
    if ((floor((float)my_game->elapsed.asMilliseconds() / 4) >= (float)my_game->elapsed.asMilliseconds() / 4) && my_game->menu == 1) {
        sprite->vector.x = sprite->vector.x - 2;
        sprite->vector2.x = sprite->vector2.x - 2;
        sprite->fond.setPosition(sprite->vector);
        sprite->fond2.setPosition(sprite->vector2);
        my_game->window.draw(sprite->fond);
        my_game->window.draw(sprite->fond2);
        // mytext.setPosition(5, 20);
        // my_game->clock.restart();
    }
    if (sprite->vector.x <= 0 && my_game->menu == 1) {
        sprite->vector.x = 1920;
        sprite->vector2.x = 0;
    }
}