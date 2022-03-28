/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** mouse
*/

#include "../include/main.hpp"

void Mouse::get_mouse_position(sf::RenderWindow *window)
{
    this->postion = sf::Mouse::getPosition(*window);
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        this->pressed = true;
    else
        this->pressed = false;
}