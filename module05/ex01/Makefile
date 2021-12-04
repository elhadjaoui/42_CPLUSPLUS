# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 23:24:20 by mel-hadj          #+#    #+#              #
#    Updated: 2021/12/04 18:46:21 by mel-hadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 			bureaucrat

CC =			clang++ -std=c++98

FLAGS =			-Wall -Wextra -Werror

HEADERS =		Bureaucrat.hpp Form.hpp

RM =			rm -rf 


SRC =			main.cpp Bureaucrat.cpp Form.cpp
			
all:			$(NAME) 

$(NAME) :		$(SRC) ${HEADERS}
				@$(CC)  $(FLAGS) $(SRC) -o $(NAME) 
				
clean:

fclean:			clean
				@$(RM) $(NAME) 		

re:				fclean all

.PHONY:			all, clean, fclean, re