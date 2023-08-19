/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 18:03:50 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int main()
{
	printf("%d\n", ft_str_is_printable("NNJJDNLDJNN"));
	printf("%d\n", ft_str_is_printable("FJJEJ E2JJJE"));
	printf("%d\n", ft_str_is_printable("EHGGHGHtrhwr\012"));
	printf("%d", ft_str_is_printable("GYDGGGDWHBWHHD\177"));
	return (0);
}
