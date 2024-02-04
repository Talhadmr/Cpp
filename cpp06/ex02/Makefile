CPP = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = ScalarConverter

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(FLAGS) $(OBJ) -I./Base.hpp -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: 
	rm -rf $(NAME) $(OBJ)
re: clean all

.PHONY: clean all re