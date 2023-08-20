/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:12:09 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/20 11:13:50 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
	char	*tab[7] = {"a", "c", "b","d", "e" , "a", NULL};
	int		i;

	ft_sort_string_tab(tab);
	i = 0;
	while (i < 7)
		printf("%s\n", tab[i++]);
	return (0);
}