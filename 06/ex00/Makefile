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

NAME		=	scalar_conversion

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

#	FILES

SRCS			=	*.cpp

OBJS = $(SRCS:.cpp=.o)

#	RULES

all			:	run joke score

$(NAME)		:	$(OBJS)
				@$(CC) $(CFLAGS) -I . -o $@ $(OBJS)

%.o:%.cpp
		$(CC) $(CFLAGS) -I . -o &@ -c $< 

re			:	fclean all

clean		:
			$(RM) $(OBJS) $(NAME).dSYM result

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