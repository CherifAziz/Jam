/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** fish1
*/

#include "../include/main.hpp"

Fish1::Fish1()
{
}

Fish1::~Fish1()
{
}

void fish1_sprite(Fish1 *fish1)
{
    sf::Vector2f scale = {0.3, 0.3};
    fish1->fish1_textur.loadFromFile("rsc/fish.png");
    fish1->fish1.setTexture(fish1->fish1_textur, NULL);
    fish1->vector_fish.x = 3500;
    fish1->vector_fish.y = rand() % 500 + 100;
    fish1->fish1.setPosition(fish1->vector_fish);
    fish1->fish1.setScale(scale);
    fish1->vitesse = 0.8;
}

void display_fish1(Fish1 *fish1, Game *my_game, Shark *shark)
{
    if (my_game->menu == 1) {
        fish1->vector_fish.x -= fish1->vitesse;
        fish1->fish1.setPosition(fish1->vector_fish);
        if (fish1->vector_fish.x <= -300) {
            fish1_sprite(fish1);
            fish1->vitesse += 0.5;
        }
        if (fish1->vector_fish.x <= (shark->vector.x + 100) && fish1->vector_fish.x >= (shark->vector.x - 100) && fish1->vector_fish.y <= (shark->vector.y + 100) && fish1->vector_fish.y >= (shark->vector.y - 50)) {
            fish1_sprite(fish1);
            my_game->score += 50;
            my_game->miam.play();
            fish1->vitesse += 0.5;
        }
        my_game->window.draw(fish1->fish1);
    }
}