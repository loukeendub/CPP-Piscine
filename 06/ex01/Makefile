# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2022/01/11 10:53:14 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	serialization

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

#	FILES

SRCS			=	main.cpp \
					Data.cpp

OBJS = $(SRCS:.cpp=.o)

#	RULES

all			:	joke run score

$(NAME)		:	$(OBJS)
				@$(CC) $(CFLAGS) $^ -o $@

re			:	fclean all

clean		:
			@$(RM) $(OBJS) result

fclean		:	clean
				@$(RM) $(NAME)

run			:	$(NAME)


score		:
				@echo "      -----------------[ CPP PISCINE 06 ]----------------"
				@echo "      |               powered by lmarzano               |"
				@echo "      -----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Serialization ]	---------------------"
				@echo "      Wow, this is even more fun than previous exercise"
				@echo ""
				@echo "                          NOT!"
				@echo "\n"
.phony		:	run clean fclean re score joke