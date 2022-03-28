/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** display_background
*/

#include "../include/main.hpp"

void background(Game *my_game, sprite *Sprite)
{
    Sprite->background.loadFromFile("rsc/background.png");
    Sprite->fond.setTexture(Sprite->background, NULL);
    Sprite->fond2.setTexture(Sprite->background, NULL);
}

void display_background(Game *my_game, sprite *sprite)
{
    if (my_game->elapsed.asMilliseconds() >= 20 && my_game->menu == 1) {
        sprite->vector.x = sprite->vector.x - 5;
        sprite->vector2.x = sprite->vector2.x - 5;
        sprite->fond.setPosition(sprite->vector);
        sprite->fond2.setPosition(sprite->vector2);
        my_game->clock.restart();
    }
    if (sprite->vector.x == 0 && my_game->menu == 1) {
        sprite->vector.x = 1920;
        sprite->vector2.x = 0;
    }
    if (my_game->menu == 1) {
        my_game->window.draw(sprite->fond);
        my_game->window.draw(sprite->fond2);
    }
}