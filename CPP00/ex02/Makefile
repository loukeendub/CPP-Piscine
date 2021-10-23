# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 18:44:35 by lmarzano          #+#    #+#              #
#    Updated: 2021/10/19 15:49:09 by loukeen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	a.out

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

#	FILES

SRCS			=	*.cpp

#	RULES

all			:	run score

$(NAME)		:	$(SRCS)
				@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

re			:	fclean all

clean		:

fclean		:	clean
				@$(RM) $(NAME)

run			:	$(NAME)

score		:
				@echo "------------------[ CPP PISCINE ]------------------"
				@echo "|               powered by lmarzano               |"
				@echo "-----------------------[READY]---------------------"

joke		: 
				@echo "---------[ THE JOB(S) OF YOUR DREAMS ]--------"
				@echo "|		Are you talking about Steve?		|"
				@echo "----------------------------------------------"
.phony		:	run clean fclean re score joke