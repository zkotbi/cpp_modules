# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 10:36:08 by zkotbi            #+#    #+#              #
#    Updated: 2024/05/01 12:44:12 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = megaphone.o


CFLAG = -Wall -Wextra -Werror

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
