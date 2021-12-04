NAME = 			DiamondTrap

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

HEADERS =		 ClapTrap.Hpp ScavTrap.Hpp  FragTrap.Hpp  DiamonTrap.Hpp

RM =			rm -rf 


SRC =			main.cpp ClapTrap.cpp ScavTrap.cpp  FragTrap.cpp  DiamonTrap.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) ${HEADERS}
				@$(CC)  $(FLAGS) $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re