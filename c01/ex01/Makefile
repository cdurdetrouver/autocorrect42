# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 15:20:09 by gbazart           #+#    #+#              #
#    Updated: 2023/08/19 15:57:59 by gbazart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = output
FLAGS = -Wall -Wextra -Werror
MAIN = main.c
FILES = ft_ultimate_ft.c
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