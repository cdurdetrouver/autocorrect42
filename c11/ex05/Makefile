# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 08:47:51 by gbazart           #+#    #+#              #
#    Updated: 2023/08/19 21:13:41 by gbazart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
PATH_SRC = ./srcs/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER) -o $(NAME)

all: $(NAME)

$(NAME):
	cc $(FLAG) $(PATH_SRC)*.c $(OPTION)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: clean all
