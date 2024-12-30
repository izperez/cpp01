# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izperez <izperez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/29 14:16:13 by izperez           #+#    #+#              #
#    Updated: 2024/12/29 14:52:35 by izperez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CC = g++
CFLAGS = -Wall -Werror -Wextra
INCLUDE = Weapon.hpp HumanA.hpp HumanB.hpp
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

.SILENT:
all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I.
		@echo "\033[32mOK Compiled!\033[0m"

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS)
		@echo "\033[32mObjets $@ created!\033[0m"

clean:
		rm -rf $(OBJS)
		@echo "\033[31mObjets destroyed!\033[0m"

fclean:
		rm -rf $(NAME)
		@echo "\033[31mExecutable Destroyed!\033[0m"

re: fclean all

.PHONY: all clean fclean re
