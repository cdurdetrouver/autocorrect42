/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/20 08:39:54 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *range;


	printf("expected output :\n");
	printf("0, 1, 2, 3, 4\n-1, 0\n");
	printf("output :\n");
	range = ft_range(0, 5);
	printf("%d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	range = ft_range(3, 3);
	range = ft_range(-1, 1);
	printf("%d, %d\n", range[0], range[1]);
	printf("\n");
	return (0);
}
