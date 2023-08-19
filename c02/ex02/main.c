/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:32:17 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	printf("%d\n", ft_str_is_alpha("ahfDHFdhaherQ"));
	printf("%d\n", ft_str_is_alpha("ahfahdhaher"));
	printf("%d", ft_str_is_alpha("ahfahdh kkgdjks"));
	return (0);
}
