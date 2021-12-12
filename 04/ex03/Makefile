# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2021/12/12 21:42:59 by loukeen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	mini_Skyrim

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

#	FILES

SRCS			=	*.cpp

#	RULES

all			:	run joke score

$(NAME)		:	$(SRCS)
				@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

re			:	fclean all

clean		:

fclean		:	clean
				@$(RM) $(NAME)

run			:	$(NAME)

score		:
				@echo "-----------------[ CPP PISCINE 04 ]----------------"
				@echo "|               powered by lmarzano               |"
				@echo "-----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Interface & recap ]	---------------------"
				@echo "		Let Me Guess, Someone Stole Your Sweetroll?"
				@echo "		"
				@echo "		  **try to use DIO as your Champion name**"
				@echo "\n"
.phony		:	run clean fclean re score joke