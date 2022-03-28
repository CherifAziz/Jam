/*
** EPITECH PROJECT, 2022
** JAM2
** File description:
** button
*/

#ifndef BUTTON_HPP_
#define BUTTON_HPP_
    #include "main.hpp"
    class Border {
        int a;
        int b;
        int c;
        int d;
    };

    class Button {
        public:
            Button(std::string path_texture, Border _border, sf::Vector2i pos);
            sf::Sprite _sprite;
            Border _border;
            sf::Vector2i pos;
        private:
        protected:
    };

#endif /* !BUTTON_HPP_ */