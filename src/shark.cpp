/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** Shark
*/

#include "../include/main.hpp"

Shark::Shark()
{
    vector.x = 30;
    vector.y = 500;
}

Shark::~Shark()
{
}

void set_position_shark(Shark *shark)
{

    shark->shark_01.setPosition(shark->vector);
    shark->shark_02.setPosition(shark->vector);
    shark->shark_03.setPosition(shark->vector);
}

void shark_sprite(Shark *shark)
{
    shark->shark.loadFromFile("rsc/shark.png");
    shark->shark_01.setTexture(shark->shark, NULL);
    // shark up
    shark->shark_up.loadFromFile("rsc/shark_up.png");
    shark->shark_02.setTexture(shark->shark_up, NULL);
    // shark down
    shark->shark_down.loadFromFile("rsc/shark_down.png");
    shark->shark_03.setTexture(shark->shark_down, NULL);
    set_position_shark(shark);
    shark->score = 0;
}

void display_shark(Shark *shark, Game *my_game)
{
    if (shark->vector.y > 0 || shark->vector.y < 1080) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            shark->vector.y = shark->vector.y - 1;
            set_position_shark(shark);
            if (my_game->menu == 1)
                my_game->window.draw(shark->shark_02);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            shark->vector.y = shark->vector.y + 1;
            set_position_shark(shark);
            if (my_game->menu == 1)
                my_game->window.draw(shark->shark_03);
        } else {
            if (my_game->menu == 1)
                my_game->window.draw(shark->shark_01);
        }
    }
}