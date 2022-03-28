/*
** EPITECH PROJECT, 2022
** JAM1
** File description:
** event
*/

#include "../include/main.hpp"

void Game::event()
{
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}   