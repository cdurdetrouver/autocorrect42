/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:53:47 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 19:02:41 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	struct s_stock_str par[3];

	par[0].size = 8;
	par[0].str = "test";
	par[0].copy = "./output";
	par[1].size = 5;
	par[1].str = "blabla";
	par[1].copy = "test2";
	par[2].str = NULL;
	ft_show_tab(par);
	return (0);
}