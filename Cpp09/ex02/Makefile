NAME = PmergeMe

SRC = main.cpp\
	  PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

 
CFLAG = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all: $(NAME)

$(NAME) : $(OBJ) 
	 c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp PmergeMe.hpp
	 c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
