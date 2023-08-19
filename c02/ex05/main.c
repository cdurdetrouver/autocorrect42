/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 17:09:16 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main()
{
	printf("%d\n", ft_str_is_uppercase("NNJJDNLDJNN"));
	printf("%d\n", ft_str_is_uppercase("FJJEJE2JJJE"));
	printf("%d\n", ft_str_is_uppercase("EHGGHGHtrhwr "));
	printf("%d", ft_str_is_uppercase("GYDGGGDWHBWHHD\177"));
	return (0);
}