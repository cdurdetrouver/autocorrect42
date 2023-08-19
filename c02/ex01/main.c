/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:30:28 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char	*text = "bonjour";
	char	dest[17] = "11111111111111";
	char	*text1 = "bonjour";
	char	dest1[17] = "11111111111111";

	printf("\nexpected output :\n");
	printf("%s\n", strncpy(dest, text, 5));
	printf("output :\n");
	printf("%s\n", ft_strncpy(dest1, text1, 5));
	return (0);
}
