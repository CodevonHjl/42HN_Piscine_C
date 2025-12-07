/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:39:20 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/19 18:11:51 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strn_dup(char *str)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc((str_len(str) + 1) * sizeof(char));
	if (!s)
		return (0);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*p;
	int					i;

	i = 0;
	p = malloc((ac + 1) * sizeof(t_stock_str));
	if (!p)
		return (0);
	while (i < ac)
	{
		p[i].size = str_len(av[i]);
		p[i].str = av[i];
		p[i].copy = strn_dup(av[i]);
		if (!p[i].copy)
			return (0);
		i++;
	}
	p[ac].str = 0;
	return (p);
}

// #include <stdio.h>
// int	main()
// {
// 	int i = 0;
// 	char *str[] = {"sdfg", "qwe", "0123456789"};
// 	int ac = 3;
// 	t_stock_str *p = ft_strs_to_tab(ac, str);
// 	while (i < ac)
// 	{
// 		printf("%d\t %s\t %s\n", p[i].size, p[i].str, p[i].copy);
// 		i++;
// 	}
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