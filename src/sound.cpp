/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** sound
*/

#include "../include/main.hpp"

void sound(Game *my_game)
{
    my_game->menu_buf.loadFromFile("rsc/menu.wav");
    my_game->menu_song.setBuffer(my_game->menu_buf);
    my_game->game_buf.loadFromFile("rsc/game.wav");
    my_game->game_song.setBuffer(my_game->game_buf);
}