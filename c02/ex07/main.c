/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 18:01:44 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int main()
{
	char test1[64] = "Bonjour";
	char test2[64]  = "test221";
	char test3[64]  = "et pq ?";
	char test4[64]  = "ok\177";

	printf("%s\n", ft_strupcase(test1));
	printf("%s\n", ft_strupcase(test2));
	printf("%s\n", ft_strupcase(test3));
	printf("%s", ft_strupcase(test4));
	return (0);
}
