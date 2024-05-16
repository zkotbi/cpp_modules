# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 17:23:34 by zkotbi            #+#    #+#              #
#    Updated: 2024/05/13 17:30:56 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex02

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)


CFLAG = -Wall -Wextra -Werror -fsanitize=address -g3

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
