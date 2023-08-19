/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:36:22 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_lowercase(char *str);

int main()
{
	printf("%d\n", ft_str_is_lowercase("twhrwhtrhwr"));
	printf("%d\n", ft_str_is_lowercase("twhrwh2rhwr"));
	printf("%d\n", ft_str_is_lowercase("twhrwhtrhwr "));
	printf("%d", ft_str_is_lowercase("twhrwhtrhwr\177"));
	return (0);
}
