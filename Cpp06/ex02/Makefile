NAME = base

SRC = main.cpp\
	  Base.cpp


OBJ = $(SRC:.cpp=.o)

 
CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ) 
	 c++ $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp
	 c++  -c $(CFLAG) $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
