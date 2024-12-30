# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izperez <izperez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/29 13:51:06 by izperez           #+#    #+#              #
#    Updated: 2024/12/29 14:10:47 by izperez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)


.SILENT:
all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
		@echo "\033[32mOK Compiled!\033[0m"

$(OBJS): $(SRC)
		$(CC) $(CFLAGS) -c $(SRC)
		@echo "\033[32mObjets $@ created!\033[0m"

clean: 
		rm -rf $(OBJ)
		@echo "\033[31mObjets destroyed!\033[0m"

fclean: 
		rm -rf $(NAME)
		@echo "\033[31mExecutable Destroyed!\033[0m"

re: fclean all

.PHONY: all clean fclean re