NAME = 			megaphone

CC =			clang++ -std=c++03

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf

SANITIZE = -fsanitize=address

SRC =			 megaphone.cpp
			
all:			$(NAME)

$(NAME) :
				@$(CC) $(FLAGS)  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) $(CLIENT) 			

re:				fclean all

.PHONY:			all, clean, fclean, re