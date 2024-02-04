NAME = interface
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp MateriaSource.hpp Ice.hpp Cure.hpp Character.hpp AMateria.hpp ICharacter.hpp IMateriaSource.hpp IMateriaSource.hpp
	@$(CC) $(FLAGS) main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all
