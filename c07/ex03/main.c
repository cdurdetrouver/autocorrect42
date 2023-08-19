/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:36 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 20:49:30 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[3];
	char	*str;
	char	*sep;

	strs[0] = "i";
	strs[1] = "am";
	strs[2] = "zod";
	sep = "||";
	str = ft_strjoin(3, strs, sep);
	printf("Expected output: %s%s%s%s%s\n", strs[0], sep, strs[1], sep,
		strs[2]);
	printf("Output: %s\n", str);
	free(str);
	str = ft_strjoin(2, strs, sep);
	printf("Expected output: %s%s%s\n", strs[0], sep, strs[1]);
	printf("Output: %s\n", str);
	free(str);
	str = ft_strjoin(1, strs + 2, sep);
	printf("Expected output: %s\n", strs[2]);
	printf("Output: %s\n", str);
	free(str);
	str = ft_strjoin(0, strs + 2, sep);
	printf("Expected output:\n");
	printf("Output: %s\n", str);
	free(str);
	printf("\n");
	return (0);
}
