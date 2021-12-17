# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2021/12/16 22:38:03 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	serialization

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
				@echo "      -----------------[ CPP PISCINE 06 ]----------------"
				@echo "      |               powered by lmarzano               |"
				@echo "      -----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Serialization ]	---------------------"
				@echo "   Wow, this is even more interesting than previous exercise"
				@echo ""
				@echo "                          NOT!"
				@echo "\n"
.phony		:	run clean fclean re score joke