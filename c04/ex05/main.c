/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 17:39:08 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}
