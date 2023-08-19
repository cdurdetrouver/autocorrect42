/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:05:49 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	div;
	int	mod;
	int *pdiv;
	int *pmod;

	pdiv = &div;
	pmod = &mod;
	ft_div_mod(14, 3, pdiv, pmod);
	ft_putchar(div + 48);
	ft_putchar('\n');
	ft_putchar(mod + 48);
	return (0);
}
