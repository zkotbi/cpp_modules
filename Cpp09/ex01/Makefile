NAME = RPN

SRC = main.cpp\
	  RPN.cpp

OBJ = $(SRC:.cpp=.o)

 
CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ) 
	 c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp RPN.hpp
	 c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
