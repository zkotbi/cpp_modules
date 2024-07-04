# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 10:36:08 by zkotbi            #+#    #+#              #
#    Updated: 2024/05/19 15:54:19 by zkotbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp\
	  Contact.cpp\
	  PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)


CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) 
	c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp Contact.hpp PhoneBook.hpp
	c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
