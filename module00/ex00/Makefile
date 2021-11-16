NAME = 			megaphone

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


SRC =			 megaphone.cpp
			
all:			$(NAME)

$(NAME) :		$(SRC)
				@$(CC) $(FLAGS)  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) $(CLIENT) 			

re:				fclean all

.PHONY:			all, clean, fclean, re