CPP = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = shur

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShurbberyCreationForm.cpp  RobotmyRequestForm.cpp PresidentialPardonForm.cpp

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