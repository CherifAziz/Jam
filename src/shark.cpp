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

// void display_eat(Game *my_game, Shark *shark, int time)
// {
//     int a = 0;
//     if (my_game->anim == 1) {
//         if (my_game->elapsed.asMilliseconds() < time + 10000)
//             my_game->window.draw(shark->shark_eat1);
//         if (my_game->elapsed.asMilliseconds() < time + 20000)
//             my_game->window.draw(shark->shark_eat2);
//         if (my_game->elapsed.asMilliseconds() < time + 30000) {
//             my_game->window.draw(shark->shark_eat3);
//         }
//         if (my_game->elapsed.asMilliseconds() > time + 30000) {
//             my_game->window.draw(shark->shark_eat3);
//             a = 1;
//         }
//     }
//     if (a == 1)
//         my_game->anim = 0;
// }

void set_position_shark(Shark *shark)
{

    shark->shark_01.setPosition(shark->vector);
    shark->shark_02.setPosition(shark->vector);
    shark->shark_03.setPosition(shark->vector);
    shark->shark_eat1.setPosition(shark->vector);
    shark->shark_eat2.setPosition(shark->vector);
    shark->shark_eat3.setPosition(shark->vector);
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
    shark->score = 0;
    // shark eat1
    shark->eat1.loadFromFile("rsc/eat1.png");
    shark->shark_eat1.setTexture(shark->eat1, NULL);
    // shark eat2
    shark->eat2.loadFromFile("rsc/eat2.png");
    shark->shark_eat2.setTexture(shark->eat2, NULL);
    // shark eat3
    shark->eat3.loadFromFile("rsc/eat3.png");
    shark->shark_eat3.setTexture(shark->eat3, NULL);
    set_position_shark(shark);
}

void display_shark(Shark *shark, Game *my_game)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && shark->vector.y > 0) {
        shark->vector.y = shark->vector.y - 1;
        set_position_shark(shark);
        if (my_game->menu == 1)
            my_game->window.draw(shark->shark_02);
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && shark->vector.y < 1080) {
        shark->vector.y = shark->vector.y + 1;
        set_position_shark(shark);
        if (my_game->menu == 1)
            my_game->window.draw(shark->shark_03);
    } else if (my_game->anim == 1) {
        if (my_game->elapsed.asMilliseconds() < 50)
            my_game->window.draw(shark->shark_eat1);
        else if (my_game->elapsed.asMilliseconds() < 150)
            my_game->window.draw(shark->shark_eat2);
        else
            my_game->window.draw(shark->shark_eat3);
        if (my_game->elapsed.asMilliseconds() > 500)
            my_game->anim = 0;
    } else {
        if (my_game->menu == 1)
            my_game->window.draw(shark->shark_01);
    }
}