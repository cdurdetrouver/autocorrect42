/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 15:58:10 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int n;
	int *ptr;
	int **ptr1;
	int ***ptr2;
	int ****ptr3;
	int *****ptr4;
	int ******ptr5;
	int *******ptr6;
	int ********ptr7;
	int *********ptr8;

	n = 30;
	ptr = &n;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(ptr8);
	ft_putchar(n/10 + 48);
	ft_putchar(n%10 + 48);
	return (0);
}
