# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 16:40:16 by zkotbi            #+#    #+#              #
#    Updated: 2024/05/13 17:11:16 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = main.cpp\
	  zombieHorde.cpp\
	  Zombie.cpp

OBJ = $(SRC:.cpp=.o)


CFLAG = -Wall -Wextra -Werror -fsanitize=address -g3

all: $(NAME)

$(NAME) : $(OBJ) 
	c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
