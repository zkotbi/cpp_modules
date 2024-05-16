# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 16:19:52 by zkotbi            #+#    #+#              #
#    Updated: 2024/05/15 18:37:59 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)


CFLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

all: $(NAME)

$(NAME) : $(OBJ) 
	c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp 
	c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
