NAME = 			violence

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf

HEADERS = 		HumanA.hpp HumanB.hpp Weapon.hpp


SRC =			main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 
			
all:			$(NAME) 

$(NAME) :		$(SRC)  $(HEADERS)
				@$(CC)  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) $(CLIENT) 			

re:				fclean all

.PHONY:			all, clean, fclean, re