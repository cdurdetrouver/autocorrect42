/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 17:48:17 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-5);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-21478);
	printf("\n");
	ft_putnbr(21478);
	printf("\n");
	ft_putnbr(5);
	return (0);
}