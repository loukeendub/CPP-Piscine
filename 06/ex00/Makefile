# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2021/12/17 13:44:04 by loukeen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	scalar_conversion

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

#	FILES

SRCS			=	main.cpp \
					ScalarConversion.cpp

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
				@echo "--------------------	[ Scalar conversion ]	---------------------"
				@echo "               Here comes another funny module..."
				@echo ""
				@echo "                              NOT!"
				@echo "\n"

test		:	re
				./test.sh

.phony		:	run clean fclean re score joke