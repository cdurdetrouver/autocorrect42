# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 15:37:13 by gbazart           #+#    #+#              #
#    Updated: 2023/08/19 15:41:53 by gbazart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = output
FLAGS = -Wall -Wextra -Werror
MAIN = main.c
FILES = ft_print_alphabet.c
OUTPUT = output.wait

all: $(NAME)

$(NAME):
	norminette -R CheckForbiddenSourceHeader $(FILES)
	cc $(FLAGS) $(MAIN) $(FILES) -o $(NAME)
	cat $(OUTPUT)
	./$(NAME)
clean:
	rm -f $(NAME)
re: clean all