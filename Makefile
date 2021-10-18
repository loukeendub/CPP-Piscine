# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 18:44:35 by lmarzano          #+#    #+#              #
#    Updated: 2021/10/18 19:21:33 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	megaphone

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

#	FILES

SRCS			=	*.cpp

OBJS	=	$(SRCS:.cpp=.o)

#	RULES

$(NAME)		:	$(SRCS)
				@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all			:	run score

re			:	fclean all

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

run			:	$(NAME)
				./$(NAME)

score		:
				@echo "------------------[ CPP PISCINE ]------------------"
				@echo "|               powered by lmarzano               |"
				@echo "-----------------------[READY]---------------------"

joke		: 
				@echo "--------------[ MEGAPHONE ]---------------"
				@echo "|	CAN YOU SPEAK A BIT LOUDER, PLEASE?	|"
				@echo "------------------------------------------"
.phony		:	clean fclean re score joke run