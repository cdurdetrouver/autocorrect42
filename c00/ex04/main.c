/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:10:08 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 15:16:23 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	f_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_is_negative(-4);
	f_putchar('\n');
	ft_is_negative(4);
	f_putchar('\n');
	ft_is_negative(0);
	return (0);
}