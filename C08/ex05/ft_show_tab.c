/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:39:14 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/19 18:02:17 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_nbr(int nbr)
{
	long	n;
	char	r;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		print_nbr(n);
	}
	r = n % 10 + '0';
	write (1, &r, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		print_str(par[i].str);
		write(1, "\n", 1);
		print_nbr(par[i].size);
		write(1, "\n", 1);
		print_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// #include <stdio.h>
// int	main()
// {
// 	int i = 0;
// 	char *strs[] = {"sdfg", "qwe", "123456789"};
// 	int size = 3;
// 	ft_show_tab(ft_strs_to_tab(size, strs));
// }

// ft_stock_str.h
// #ifndef FT_STOCK_STR_H
// #define FT_STOCK_STR_H
// typedef struct s_stock_str
// {
// 	int size;
// 	char *str;
// 	char *copy;
// } t_stock_str;
// #endifcd e