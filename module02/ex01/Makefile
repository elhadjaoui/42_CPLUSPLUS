NAME = 			OCCF

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


SRC =			main.cpp Fixed.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) Fixed.hpp
				@$(CC)  $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re