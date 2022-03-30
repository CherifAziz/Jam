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

void set_mire(Mire *mire)
{
    sf::Vector2f scale = {0.5, 0.5};
    mire->mire_textur.loadFromFile("rsc/mine.png");
    mire->mire.setTexture(mire->mire_textur, NULL);
    mire->vitesse = 0.7;
    mire->mire.setScale(scale);

    mire->mire_textur2.loadFromFile("rsc/mine.png");
    mire->mire2.setTexture(mire->mire_textur2, NULL);
    mire->mire2.setScale(scale);
    mire->vitesse2 = 0.7;
    set_pos_mire(mire);
    set_pos_mire2(mire);
}

void set_pos_mire(Mire *mire)
{
    mire->vector_mire.x = 3000;
    mire->vector_mire.y = rand() % 600 + 100;
    mire->mire.setPosition(mire->vector_mire);
}

void set_pos_mire2(Mire *mire)
{
    mire->vector_mire2.x = 2500;
    mire->vector_mire2.y = rand() % 600 + 100;
    mire->mire2.setPosition(mire->vector_mire2);
}

void display_mire(Mire *mire, Game *my_game, Shark *shark)
{
    if (my_game->menu == 1) {
        mire->vector_mire.x -= mire->vitesse;
        mire->mire.setPosition(mire->vector_mire);
        if (mire->vector_mire.x <= -300) {
            set_pos_mire(mire);
            mire->vitesse += 0.3;
        }
        if (mire->vector_mire.x <= (shark->vector.x + 100) && mire->vector_mire.x >= (shark->vector.x - 100) && mire->vector_mire.y <= (shark->vector.y + 100) && mire->vector_mire.y >= (shark->vector.y - 100)) {
            my_game->window.close();
        }

        mire->vector_mire2.x -= mire->vitesse2;
        mire->mire2.setPosition(mire->vector_mire2);
        if (mire->vector_mire2.x <= -300) {
            set_pos_mire2(mire);
            mire->vitesse2 += 0.3;
        }
        if (mire->vector_mire2.x <= (shark->vector.x + 100) && mire->vector_mire2.x >= (shark->vector.x - 100) && mire->vector_mire2.y <= (shark->vector.y + 100) && mire->vector_mire2.y >= (shark->vector.y - 100)) {
            my_game->window.close();
        }
        my_game->window.draw(mire->mire);
        my_game->window.draw(mire->mire2);
    }
}