/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 16:26:38 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char	*text = "bonjour les amis";
	char	dest[17];
	char	text1[17] = "bonjour les amis";
	char	dest1[17];

	printf("\nexpected output :\n");
	printf("%s\n", strcpy(dest, text));
	printf("output :\n");
	printf("%s\n", ft_strcpy(dest1, text1));

	return (0);
}
