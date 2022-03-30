/*
** EPITECH PROJECT, 2022
** Jam
** File description:
** text
*/

#include "../include/main.hpp"

Text::Text()
{
    
}

Text::~Text()
{

}

void display_text(Game *my_game, Text *texts)
{
    texts->Score_nbr.setString(std::to_string(my_game->score));
    my_game->window.draw(texts->Score);
    my_game->window.draw(texts->Score_nbr);
}

void text(Game *my_game, Text *texts)
{
    texts->font.loadFromFile("rsc/font.otf");
    texts->vector.x = 0;
    texts->vector.y = 0;
    texts->Score.setFont(texts->font);
    texts->Score.setString("Score ");
    texts->Score.setCharacterSize(60);
    texts->Score.setPosition(texts->vector);
    texts->Score.setColor(sf::Color::Red);
    //
    texts->Arial.loadFromFile("rsc/arial.ttf");
    texts->vector2.x = 200;
    texts->vector2.y = 0;
    texts->Score_nbr.setFont(texts->Arial);
    texts->Score_nbr.setString(std::to_string(my_game->score));
    texts->Score_nbr.setCharacterSize(60);
    texts->Score_nbr.setPosition(texts->vector2);
    texts->Score_nbr.setColor(sf::Color::Red);
}