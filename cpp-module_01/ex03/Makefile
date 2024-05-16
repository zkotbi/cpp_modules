# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 17:47:21 by zkotbi            #+#    #+#              #
#    Updated: 2024/05/14 15:01:41 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = prog

SRC = main.cpp\
	  HumanA.cpp\
	  HumanB.cpp\
	  Weapon.cpp

OBJ = $(SRC:.cpp=.o)


CFLAG = -Wall -Wextra -Werror -fsanitize=address -g3

all: $(NAME)

$(NAME) : $(OBJ) 
	c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
