# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izperez <izperez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/27 10:11:42 by izperez           #+#    #+#              #
#    Updated: 2024/12/27 11:29:47 by izperez          ###   ########.fr        #
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
		@echo "OK Compiled!"

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS)
		@echo "Objets $@ created!!"

clean:
		rm -rf $(OBJS)
		@echo "Objets destroyed!"

fclean:
		rm -rf $(NAME)
		@echo "Executable Destroyed!"

re: fclean all

.PHONY: all clean fclean re
