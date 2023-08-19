/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:06:16 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 14;
	b = 3;
	pa = &a;
	pb = &b;
	ft_ultimate_div_mod(pa, pb);
	ft_putchar(a + 48);
	ft_putchar('\n');
	ft_putchar(b+ 48);
	return (0);
}
