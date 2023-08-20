make fclean
make

if 	[ ! -f "./srcs/ft_putchar.o" ];then
	echo "ft_putchar.o n'est pas au bon endroit !";
fi
if 	[ ! -f "./srcs/ft_putstr.o" ];then
	echo "ft_putstr.o n'est pas au bon endroit !";
fi
if 	[ ! -f "./srcs/ft_strcmp.o" ];then
	echo "ft_strcmp.o n'est pas au bon endroit !";
fi
if 	[ ! -f "./srcs/ft_strlen.o" ];then
	echo "ft_strlen.o n'est pas au bon endroit !";
fi
if 	[ ! -f "./srcs/ft_swap.o" ];then
	echo "ft_swap.o n'est pas au bon endroit !";
fi
if 	[ ! -f "./libft.a" ];then
	echo "libft.a n'est pas au bon endroit !";
fi