# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 17:34:55 by lmarzano          #+#    #+#              #
#    Updated: 2021/11/15 17:34:57 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#	ARGS

NAME		=	T1

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

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
				@echo "-----------------[ CPP PISCINE 03 ]----------------"
				@echo "|               powered by lmarzano               |"
				@echo "-----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Aaaaand...OPEN! ]	---------------------"
				@echo "	What name should you never call a robot?"
				@echo "			Rusty."
				@echo "\n"
.phony		:	run clean fclean re score joke