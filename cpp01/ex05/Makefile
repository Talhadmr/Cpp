
all:Harl

Harl:Harl.o
	@c++ main.cpp Harl.cpp -Wall -Wextra -Werror -std=c++98 -o Harl
Harl.o:
	@c++ main.cpp Harl.cpp -Wall -Wextra -Werror -std=c++98 -c

clean:
	@rm -rf Harl
fclean:
	@rm -rf Harl main.o Harl.o
re: clean all
