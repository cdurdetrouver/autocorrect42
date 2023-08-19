/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:34:34 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	printf("%d\n", ft_str_is_numeric("198023984"));
	printf("%d\n", ft_str_is_numeric("19802E984"));
	printf("%d\n", ft_str_is_numeric("198023984 "));
	printf("%d", ft_str_is_numeric("19\t023984"));
	return (0);
}
