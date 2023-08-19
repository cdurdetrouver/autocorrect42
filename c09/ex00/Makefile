# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 15:20:09 by gbazart           #+#    #+#              #
#    Updated: 2023/08/19 20:16:59 by gbazart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = output
FLAGS = -Wall -Wextra -Werror
MAIN = main.c
FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OUTPUT = output.wait

all: $(NAME)

$(NAME):
	norminette -R CheckDefine $(FILES)
	sh libft_creator.sh
	cc $(FLAGS) $(MAIN) -o $(NAME)
	./$(NAME)

clean:
	rm -f $(NAME)
re: clean all