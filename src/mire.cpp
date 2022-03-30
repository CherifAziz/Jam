/*
** EPITECH PROJECT, 2022
** Jam
** File description:
** mire
*/

#include "../include/main.hpp"

Mire::Mire()
{
}

Mire::~Mire()
{
}

void mire_sprite(Mire *mire)
{
    sf::Vector2f scale = {0.5, 0.5};
    mire->mire_textur.loadFromFile("rsc/mine.png");
    mire->mire.setTexture(mire->mire_textur, NULL);
    mire->vector_mire.x = 3000;
    mire->vector_mire.y = rand() % 800 + 100;
    mire->mire.setPosition(mire->vector_mire);
    mire->mire.setScale(scale);
    mire->vitesse = 0.7;

    sf::Vector2f scale2 = {0.5, 0.5};
    mire->mire_textur2.loadFromFile("rsc/mine.png");
    mire->mire2.setTexture(mire->mire_textur2, NULL);
    mire->vector_mire2.x = 2500;
    mire->vector_mire2.y = rand() % 600 + 200;
    mire->mire2.setPosition(mire->vector_mire2);
    mire->mire2.setScale(scale2);
    mire->vitesse2 = 0.7;
}

void display_mire(Mire *mire, Game *my_game, Shark *shark)
{
    if (my_game->menu == 1) {
        mire->vector_mire.x -= mire->vitesse;
        mire->mire.setPosition(mire->vector_mire);
        if (mire->vector_mire.x <= -300) {
            mire_sprite(mire);
            mire->vitesse += 1;
        }
        if (mire->vector_mire.x <= (shark->vector.x + 100) && mire->vector_mire.x >= (shark->vector.x - 100) && mire->vector_mire.y <= (shark->vector.y + 100) && mire->vector_mire.y >= (shark->vector.y - 100)) {
            my_game->window.close();
            printf("%d\n", my_game->score);
        }
        my_game->window.draw(mire->mire);


        mire->vector_mire2.x -= mire->vitesse2;
        mire->mire2.setPosition(mire->vector_mire2);
        if (mire->vector_mire2.x <= -300) {
            mire_sprite(mire);
            mire->vitesse2 += 1;
        }
        if (mire->vector_mire2.x <= (shark->vector.x + 100) && mire->vector_mire2.x >= (shark->vector.x - 100) && mire->vector_mire2.y <= (shark->vector.y + 100) && mire->vector_mire2.y >= (shark->vector.y - 100)) {
            my_game->window.close();
            printf("%d\n", my_game->score);
        }
        my_game->window.draw(mire->mire);
    }
}