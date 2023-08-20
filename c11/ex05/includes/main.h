/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:36:39 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 10:54:21 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

void	ft_putstr(char *str);
int		add(int n1, int n2);
int		minus(int n1, int n2);
int		time(int n1, int n2);
int		div(int n1, int n2);
int		mod(int n1, int n2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

#endif
