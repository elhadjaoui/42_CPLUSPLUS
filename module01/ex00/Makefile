NAME = 			zombie

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


SRC =			newZombie.cpp main.cpp randomChump.cpp Zombie.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) Zombie.hpp
				@$(CC) -I Zombie.hpp  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) $(CLIENT) 			

re:				fclean all

.PHONY:			all, clean, fclean, re