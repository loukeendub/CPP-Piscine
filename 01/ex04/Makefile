# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 18:44:35 by lmarzano          #+#    #+#              #
#    Updated: 2021/11/03 13:21:23 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	replace

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
				@echo "-----------------[ CPP PISCINE 01 ]----------------"
				@echo "|               powered by lmarzano               |"
				@echo "-----------------------[READY]---------------------"

joke		: 
				@echo "---------	[ Sed is for losers ]	----------"
				@echo "	<enter joke here>"
				@echo "\n"
.phony		:	run clean fclean re score joke