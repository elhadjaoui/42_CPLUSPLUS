NAME = 			ScavTrap

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

HEADERS =		 ClapTrap.Hpp ScavTrap.Hpp 

RM =			rm -rf


SRC =			main.cpp ClapTrap.cpp ScavTrap.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) ${HEADERS}
				@$(CC)  $(FLAGS) $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re