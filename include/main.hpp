/*
** EPITECH PROJECT, 2022
** JAM1
** File description:
** main
*/

#ifndef MAIN_HPP_
#define MAIN_HPP_
    #include <iostream>
    #include <SFML/Graphics.hpp>
    #include <SFML/Audio.hpp>

    class Mouse {
        public:
            void get_mouse_position(sf::RenderWindow *window);
            sf::Vector2i postion;
            bool pressed;
        private:
        protected:
    };

    class Game {
        public:
            Game();
            ~Game();
            void event();
            int menu = 0;

            sf::Clock clock;
            sf::Time elapsed;
            sf::RenderWindow window;
            sf::SoundBuffer menu_buf;
            sf::SoundBuffer game_buf;
            sf::Sound menu_song;
            sf::Sound game_song;
            
            Mouse _mouse;
            sf::Keyboard key;
            int score;
        private:
        protected:
    };
    class sprite {
        public:
            sprite();
            ~sprite();
            sf::Texture background;
            sf::Texture menu;
            sf::Sprite menu_01;
            sf::Sprite fond;
            sf::Sprite fond2;
            sf::Vector2f vector;
            sf::Vector2f vector2;
    };
    class Shark {
        public:
            Shark();
            ~Shark();
            sf::Texture shark;
            sf::Sprite shark_01;
            sf::Vector2f vector;
            sf::Texture shark_up;
            sf::Sprite shark_02;
            sf::Texture shark_down;
            sf::Sprite shark_03;
            int score;
    };
    class Fish1 {
        public:
            Fish1();
            ~Fish1();
            sf::Texture fish1_textur;
            sf::Sprite fish1;
            sf::Vector2f vector_fish;
            float vitesse;
    };

    class Ninja {
        public:
            Ninja();
            ~Ninja();
            sf::Texture ninja_textur;
            sf::Sprite ninja;
            sf::Vector2f vector_ninja;
            float vitesse;
    };

    class Mire {
        public:
            Mire();
            ~Mire();
            sf::Texture mire_textur;
            sf::Sprite mire;
            sf::Vector2f vector_mire;
            float vitesse;
    };

    void fish1_sprite(Fish1 *fish1);
    void display_fish1(Fish1 *fish1, Game *my_game, Shark *shark);

    void ninja_sprite(Ninja *ninja);
    void display_ninja(Ninja *ninja, Game *my_game, Shark *shark);

    void mire_sprite(Mire *mire);
    void display_mire(Mire *mire, Game *my_game, Shark *shark);
    void background(Game *my_game, sprite *Sprite);
    void display_background(Game *my_game, sprite *sprite);
    void shark_sprite(Shark *shark);
    void display_shark(Shark *shark, Game *my_game);
    void display_menu(sprite *Sprite, Game *my_game);
    void menu(sprite *Sprite);
    void sound(Game *my_game);

#endif /* !MAIN_HPP_ */
