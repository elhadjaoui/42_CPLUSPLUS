NAME = 			phonebook

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


SRC =			 Phonebook.cpp main.cpp Contact.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) Contact.hpp Phonebook.hpp
				@$(CC)   $(SRC) -o $(NAME)
				
clean:

fclean:			clean
				@$(RM) $(NAME) $(CLIENT) 			

re:				fclean all

.PHONY:			all, clean, fclean, re