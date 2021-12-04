NAME = 			Poly

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

HEADERS =		Animal.hpp Cat.hpp Dog.hpp Brain.hpp

RM =			rm -rf 


SRC =			main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) ${HEADERS}
				@$(CC)  $(FLAGS) $(SRC) -o $(NAME) 
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re