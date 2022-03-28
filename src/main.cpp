/*
** EPITECH PROJECT, 2022
** JAM1
** File description:
** main
*/

#include "../include/main.hpp"

int main()
{
    Game my_game;
    sprite Sprite;
    Shark shark;
    Fish1 fish;

    background(&my_game, &Sprite);
    shark_sprite(&shark);
    menu(&Sprite);
    sound(&my_game);
    fish1_sprite(&fish);
    my_game.menu_song.play();

    while (my_game.window.isOpen()) {
        display_background(&my_game, &Sprite);
        display_shark(&shark, &my_game);
        display_menu(&Sprite, &my_game);
        display_fish1(&fish, &my_game);
        my_game.elapsed = my_game.clock.getElapsedTime();
        if (my_game.elapsed.asSeconds() >= 1)
            my_game.clock.restart();

        my_game.event();
        // my_game.window.clear();
        my_game.window.display();
    }
}