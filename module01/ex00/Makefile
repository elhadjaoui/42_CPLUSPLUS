NAME = 			zombie

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


SRC =			newZombie.cpp main.cpp randomChump.cpp Zombie.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) Zombie.hpp
				@$(CC)  $(FLAGS) $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re