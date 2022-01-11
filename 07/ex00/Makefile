# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2022/01/11 13:38:42 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	foos

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
				@echo "--------------------	[ A few functions ]	---------------------"
				@echo "          This CPP-Piscine is getting on my nerves"
				@echo ""
				@echo "                           REALLY!"
				@echo "\n"
.phony		:	run clean fclean re score joke