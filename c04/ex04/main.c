/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 17:44:30 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0");
	write(1, "\n", 1);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
