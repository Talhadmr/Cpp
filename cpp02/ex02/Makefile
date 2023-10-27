CPP = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Fixed

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: 
	rm -rf $(NAME) $(OBJ)
re: clean all

.PHONY: clean all re
