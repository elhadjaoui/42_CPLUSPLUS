# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 23:24:20 by mel-hadj          #+#    #+#              #
#    Updated: 2021/12/03 16:08:54 by mel-hadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 			bureaucrat

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

HEADERS =		Bureaucrat.hpp 

RM =			rm -rf 


SRC =			main.cpp Bureaucrat.cpp 
			
all:			$(NAME) 

$(NAME) :		$(SRC) ${HEADERS}
				@$(CC)  $(FLAGS) $(SRC) -o $(NAME) 
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re