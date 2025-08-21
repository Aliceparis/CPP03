NAME = Fragtrap

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = ClapTrap.cpp\
	main.cpp\
	ScavTrap.cpp\
	FragTrap.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re 