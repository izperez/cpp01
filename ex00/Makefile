# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izperez <izperez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/27 10:11:42 by izperez           #+#    #+#              #
#    Updated: 2024/12/27 13:18:28 by izperez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = g++ #clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDE = Zombie.hpp
SRCS = Zombie.cpp NewZombie.cpp randomChump.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

.SILENT:
all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I.
		@echo "\033[32mOK Compiled!\033[0m"

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS)
		@echo "\033[32mObjets $@ created!\033[0m!"

clean:
		rm -rf $(OBJS)
		@echo "\033[31mObjets destroyed!\033[0m"

fclean:
		rm -rf $(NAME)
		@echo "\033[31mExecutable Destroyed!\033[0m"

re: fclean all

.PHONY: all clean fclean re
