/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** menu
*/

#include "../include/main.hpp"

void menu(sprite *Sprite)
{
    Sprite->menu.loadFromFile("rsc/menu.png");
    Sprite->menu_01.setTexture(Sprite->menu, NULL);
}

void display_menu(sprite *Sprite, Game *my_game)
{
    Mouse mouse;
    mouse.get_mouse_position(&my_game->window);

    if (my_game->menu != 1)
        my_game->window.draw(Sprite->menu_01);
    if (my_game->menu != 1 && mouse.postion.x >= 840 && mouse.postion.x <= 1070
    && mouse.postion.y >= 414 && mouse.postion.y <= 480 && mouse.pressed == true) {
        my_game->menu = 1;
        my_game->game_song.play();
        my_game->menu_song.stop();
        my_game->game_song.setLoop(true);
    }
    if (my_game->menu != 1 && mouse.postion.x >= 840 && mouse.postion.x <= 1070
    && mouse.postion.y >= 654 && mouse.postion.y <= 714 && mouse.pressed == true)
        my_game->window.close();
    
}