# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 15:20:09 by gbazart           #+#    #+#              #
#    Updated: 2023/08/19 19:01:37 by gbazart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = output
FLAGS = -Wall -Wextra -Werror
MAIN = main.c
HEADER = ft_point.h
HEADER_PATH = ./
FILES = ft_show_tab.c
OUTPUT = output.wait

all: $(NAME)

$(NAME):
	norminette -R CheckForbiddenSourceHeader $(FILES)
	cc $(FLAGS) $(MAIN) $(FILES) -I $(HEADER_PATH) -o $(NAME)
	cat $(OUTPUT)
	./$(NAME) :

clean:
	rm -f $(NAME)
re: clean all