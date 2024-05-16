# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 18:51:34 by zkotbi            #+#    #+#              #
#    Updated: 2024/05/16 18:59:41 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

SRC = main.cpp\
	  Harl.cpp

OBJ = $(SRC:.cpp=.o)


CFLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

all: $(NAME)

$(NAME) : $(OBJ) 
	c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp Harl.hpp
	c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
