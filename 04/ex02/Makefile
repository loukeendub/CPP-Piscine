# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2021/12/06 23:54:29 by loukeen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	MirrorsEdge

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
				@echo "-----------------[ CPP PISCINE 04 ]----------------"
				@echo "|               powered by lmarzano               |"
				@echo "-----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Abstract Class ]	---------------------"
				@echo "	<enter joke here>"
				@echo "\n"
.phony		:	run clean fclean re score joke