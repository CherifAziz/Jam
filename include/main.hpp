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
    #include <SFML/Graphics/Text.hpp>
    #include <SFML/Graphics/Font.hpp>
    #include <sstream>
    #include <string>
    #include <cmath>

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
            int anim = 0;

            sf::Clock clock;
            sf::Time elapsed;
            sf::RenderWindow window;
            sf::SoundBuffer menu_buf;
            sf::SoundBuffer game_buf;
            sf::SoundBuffer eat;
            sf::Sound menu_song;
            sf::Sound game_song;
            sf::Sound miam;

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
            sf::Texture eat1;
            sf::Sprite shark_eat1;
            sf::Texture eat2;
            sf::Sprite shark_eat2;
            sf::Texture eat3;
            sf::Sprite shark_eat3;
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

            sf::Texture mire_textur2;
            sf::Sprite mire2;
            sf::Vector2f vector_mire2;
            float vitesse2;
    };

    class Text {
        public:
            Text();
            ~Text();

            sf::Font font;
            sf::Text Score;
            sf::Vector2f vector;
            sf::Font Arial;
            sf::Text Score_nbr;
            sf::Vector2f vector2;
    };

    void set_fish1(Fish1 *fish1);
    void set_pos_fish1(Fish1 *fish1);
    void display_fish1(Fish1 *fish1, Game *my_game, Shark *shark);

    void set_ninja(Ninja *ninja);
    void set_pos_ninja(Ninja *ninja);
    void display_ninja(Ninja *ninja, Game *my_game, Shark *shark);

    void set_mire(Mire *mire);
    void set_pos_mire(Mire *mire);
    void set_pos_mire2(Mire *mire);
    void display_mire(Mire *mire, Game *my_game, Shark *shark);

    void background(Game *my_game, sprite *Sprite);
    void display_background(Game *my_game, sprite *sprite);
    void shark_sprite(Shark *shark);
    void display_shark(Shark *shark, Game *my_game);
    void display_menu(sprite *Sprite, Game *my_game);
    void menu(sprite *Sprite);
    void sound(Game *my_game);
    void text(Game *my_game, Text *texts);
    void display_text(Game *my_game, Text *texts);

#endif /* !MAIN_HPP_ */
