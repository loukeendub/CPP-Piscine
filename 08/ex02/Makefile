# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2021/12/29 20:06:50 by loukeen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	mutatedAbomination

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
			@$(RM) $(OBJS) result

fclean		:	clean
				@$(RM) $(NAME)

run			:	$(NAME)


score		:
				@echo "      -----------------[ CPP PISCINE 08 ]----------------"
				@echo "      |               powered by lmarzano               |"
				@echo "      -----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Mutated Abomination ]	---------------------"
				@echo "      joke"
				@echo ""
				@echo "      joke"
				@echo "\n"
.phony		:	run clean fclean re score joke