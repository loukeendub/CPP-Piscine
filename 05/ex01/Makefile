# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:26:38 by lmarzano          #+#    #+#              #
#    Updated: 2021/12/14 19:45:07 by lmarzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	ARGS

NAME		=	gringott_form

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

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
				@echo "-----------------[ CPP PISCINE 05 ]----------------"
				@echo "|               powered by lmarzano               |"
				@echo "-----------------------[READY]---------------------"

joke		: 
				@echo "--------------------	[ Form up, maggots! ]	---------------------"
				@echo "       Did you hear about the bureaucrat who was a Platonist?"
				@echo ""
				@echo "              They were really obsessed with forms."
				@echo "\n"
.phony		:	run clean fclean re score joke