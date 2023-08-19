/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 20:38:18 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char str[64] = "bonjour test";
	char *str3;
	char str2[64] = "bonjour test";
	char *str4;
	printf("\n");
	printf("expected output :\n");
	str3 = strdup(str);
	printf("%s\n", str3);
	printf("output :\n");
	str4 = ft_strdup(str2);
	printf("%s", str4);
	free(str3);
	free(str4);
	return (0);
}
