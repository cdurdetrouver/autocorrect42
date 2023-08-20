/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:34:38 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 13:25:47 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_atoi(argv[3]) == 0 && argv[2][0] == '/')
			ft_putstr("Stop : division by zero");
		else if (ft_atoi(argv[3]) == 0 && argv[2][0] == '%')
			ft_putstr("Stop : modulo by zero");
		else if (argv[2][0] == '+')
			ft_putnbr(add(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '-')
			ft_putnbr(minus(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '*')
			ft_putnbr(time(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '/')
			ft_putnbr(div(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '%')
			ft_putnbr(mod(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
