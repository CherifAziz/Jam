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

void set_ninja(Ninja *ninja)
{
    sf::Vector2f scale = {0.5, 0.5};
    ninja->ninja_textur.loadFromFile("rsc/poisson.png");
    ninja->ninja.setTexture(ninja->ninja_textur, NULL);
    ninja->vitesse = 0.8;
    ninja->ninja.setScale(scale);
}

void set_pos_ninja(Ninja *ninja)
{
    ninja->vector_ninja.x = 2200;
    ninja->vector_ninja.y = rand() % 500 + 100;
    ninja->ninja.setPosition(ninja->vector_ninja);
}

void display_ninja(Ninja *ninja, Game *my_game, Shark *shark)
{
    if (my_game->menu == 1) {
        ninja->vector_ninja.x -= ninja->vitesse;
        ninja->ninja.setPosition(ninja->vector_ninja);
        if (ninja->vector_ninja.x <= -300) {
            set_pos_ninja(ninja);
            ninja->vitesse += 0.3;
        }
        if (ninja->vector_ninja.x <= (shark->vector.x + 100) && ninja->vector_ninja.x >= (shark->vector.x - 100) && ninja->vector_ninja.y <= (shark->vector.y + 100) && ninja->vector_ninja.y >= (shark->vector.y - 50)) {
            set_pos_ninja(ninja);
            my_game->miam.play();
            my_game->score += 50;
            ninja->vitesse += 0.3;
        }
        my_game->window.draw(ninja->ninja);
    }
}