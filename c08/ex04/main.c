/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:45:35 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 18:59:42 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	struct s_stock_str *par;

	par = ft_strs_to_tab(argc, argv);
	printf("%d\n", par[0].size);
	par[0].str = "test";
	printf("%s\n", par[0].str);
	printf("%s\n", par[0].copy);
	printf("%d\n", par[1].size);
	par[1].str = "blabla";
	printf("%s\n", par[1].str);
	printf("%s", par[1].copy);
	return (0);
}