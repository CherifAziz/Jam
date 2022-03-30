/*
** EPITECH PROJECT, 2022
** JAM1
** File description:
** Init
*/

#include "../include/main.hpp"

Game::Game()
{
    window.create(sf::VideoMode(1920,1080,32), "Shark super hunter");
    score = 0;
}

Game::~Game()
{

}

sprite::sprite()
{
    vector.x = 1920;
    vector2.x = 0;
}

sprite::~sprite()
{

}