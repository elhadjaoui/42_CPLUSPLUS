NAME = 			zombiehorde

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


SRC =			ZombieHorde.cpp main.cpp Zombie.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) Zombie.hpp
				@$(CC)  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) 			

re:				fclean all

.PHONY:			all, clean, fclean, re