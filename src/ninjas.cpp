/*
** EPITECH PROJECT, 2022
** Jam
** File description:
** ninjas
*/

#include "../include/main.hpp"

Ninja::Ninja()
{
}

Ninja::~Ninja()
{
}

void ninja_sprite(Ninja *ninja)
{
    sf::Vector2f scale = {0.5, 0.5};
    ninja->ninja_textur.loadFromFile("rsc/blue_poisson.jpeg");
    ninja->ninja.setTexture(ninja->ninja_textur, NULL);
    ninja->vector_ninja.x = 2200;
    ninja->vector_ninja.y = rand() % 500 + 100;
    ninja->ninja.setPosition(ninja->vector_ninja);
    ninja->ninja.setScale(scale);
    ninja->vitesse = 0.8;
}

void display_ninja(Ninja *ninja, Game *my_game, Shark *shark)
{
    if (my_game->menu == 1) {
        ninja->vector_ninja.x -= ninja->vitesse;
        ninja->ninja.setPosition(ninja->vector_ninja);
        if (ninja->vector_ninja.x <= -300) {
            ninja_sprite(ninja);
            ninja->vitesse += 0.8;
        }
        if (ninja->vector_ninja.x <= (shark->vector.x + 100) && ninja->vector_ninja.x >= (shark->vector.x - 100) && ninja->vector_ninja.y <= (shark->vector.y + 100) && ninja->vector_ninja.y >= (shark->vector.y - 50)) {
            ninja_sprite(ninja);
            my_game->score += 100;
            ninja->vitesse += 0.8;
        }
        my_game->window.draw(ninja->ninja);
    }
}