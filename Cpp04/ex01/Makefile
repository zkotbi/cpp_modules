# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 12:13:18 by zkotbi            #+#    #+#              #
#    Updated: 2024/07/05 10:01:45 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

SRC = main.cpp \
	  Brain.cpp\
	  Animal.cpp \
	  Cat.cpp\
	  Dog.cpp \
	  WrongCat.cpp \
	  WrongAnimal.cpp

OBJ = $(SRC:.cpp=.o)

CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ) 
	c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
	c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
