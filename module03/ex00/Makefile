NAME = 			ClapTrap

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


SRC =			main.cpp ClapTrap.cpp 
			
all:			$(NAME) 

$(NAME) :		$(SRC) ClapTrap.hpp
				@$(CC)  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME)	

re:				fclean all

.PHONY:			all, clean, fclean, re