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
    Mire mire;
    Ninja ninja;
    Text texts;

    background(&my_game, &Sprite);
    shark_sprite(&shark);
    menu(&Sprite);
    sound(&my_game);
    fish1_sprite(&fish);
    mire_sprite(&mire);
    ninja_sprite(&ninja);
    text(&my_game, &texts);
    my_game.menu_song.play();

    while (my_game.window.isOpen()) {
        display_background(&my_game, &Sprite);
        display_shark(&shark, &my_game);
        display_menu(&Sprite, &my_game);
        display_fish1(&fish, &my_game, &shark);
        display_ninja(&ninja, &my_game, &shark);
        display_mire(&mire, &my_game, &shark);
        display_text(&my_game, &texts);

        my_game.elapsed = my_game.clock.getElapsedTime();
        if (my_game.elapsed.asSeconds() >= 1)
            my_game.clock.restart();

        my_game.event();
        // my_game.window.clear();
        my_game.window.display();
    }
}