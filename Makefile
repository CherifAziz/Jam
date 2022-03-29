##
## EPITECH PROJECT, 2022
## B-OOP-400-TLS-4-1-tekspice-roonui-junior.lafortune
## File description:
## Makefile
##

NAME	=	Shark_Super_Hunter

SRC		=	engine/mouse.cpp \
			src/main.cpp \
			src/init.cpp \
			src/event.cpp \
			src/background.cpp \
			src/shark.cpp \
			src/menu.cpp \
			src/sound.cpp \
			src/fish.cpp \
			src/mire.cpp \
			src/ninjas.cpp

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	=	-std=c++20 

all : $(NAME)

$(NAME):	$(OBJ)
		g++	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)
		rm -f $(OBJ)

re: 	clean fclean all

.PHONY: all lib fclean clean re