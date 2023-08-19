# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 15:20:09 by gbazart           #+#    #+#              #
#    Updated: 2023/08/19 18:34:12 by gbazart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = output
FLAGS = -Wall -Wextra -Werror
MAIN = main.c
HEADER = ft_boolean.h
HEADER_PATH = ./
OUTPUT = output.wait

all: $(NAME)

$(NAME):
	norminette -R CheckDefine $(HEADER)
	cc $(FLAGS) $(MAIN) -I $(HEADER_PATH) -o $(NAME)
	cat $(OUTPUT)
	./$(NAME) test

clean:
	rm -f $(NAME)
re: clean all