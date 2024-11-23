NAME = btc

SRC = main.cpp\
	  BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

 
CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ) 
	 c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp BitcoinExchange.hpp
	 c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
