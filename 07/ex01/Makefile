# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2022/01/11 13:38:24 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	iter

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

#	FILES

SRCS			=	main.cpp

OBJS = $(SRCS:.cpp=.o)

#	RULES

all			:	joke run score

$(NAME)		:	$(OBJS)
				@$(CC) $(CFLAGS) $^ -o $@

re			:	fclean all

clean		:
			@$(RM) $(OBJS)

fclean		:	clean
				@$(RM) $(NAME)

run			:	$(NAME)


score		:
				@echo "      -----------------[ CPP PISCINE 07 ]----------------"
				@echo "      |               powered by lmarzano               |"
				@echo "      -----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Iter ]	---------------------"
				@echo "                     Not fun!"
				@echo ""
				@echo "            I want my Zombie class back!!!"
				@echo "\n"
.phony		:	run clean fclean re score joke