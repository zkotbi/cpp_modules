# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/05 15:12:07 by zkotbi            #+#    #+#              #
#    Updated: 2024/06/08 16:59:13 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavTrap

SRC = main.cpp\
	  ScavTrap.cpp\
	  ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)


CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ) 
	c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
