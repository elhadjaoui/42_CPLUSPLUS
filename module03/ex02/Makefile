NAME = 			FragTrap

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

HEADERS =		 ClapTrap.Hpp ScavTrap.Hpp  FragTrap.Hpp 

RM =			rm -rf


SRC =			main.cpp ClapTrap.cpp ScavTrap.cpp  FragTrap.cpp 
			
all:			$(NAME) 

$(NAME) :		$(SRC) ${HEADERS}
				@$(CC)  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re