/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:01:25 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	a;
	int	*pa;
	int	b;
	int	*pb;

	a = 10;
	pa = &a;
	b = 42;
	pb = &b;
	ft_swap(pa, pb);
	ft_putchar(a/10 + 48);
	ft_putchar(a%10 + 48);
	ft_putchar('\n');
	ft_putchar(b/10 + 48);
	ft_putchar(b%10 + 48);
}
