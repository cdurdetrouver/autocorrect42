/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/20 08:34:19 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	testNumbers[] = {-42, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int	numTests;
	int	num;

	numTests = sizeof(testNumbers) / sizeof(testNumbers[0]);
	for (int i = 0; i < numTests; i++)
	{
		num = testNumbers[i];
		printf("Le factoriel de %d est %d.\n", num, ft_iterative_factorial(num));
	}
	return (0);
}
