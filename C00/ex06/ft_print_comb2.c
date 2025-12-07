/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:26:50 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/04 16:23:06 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c);
void	int_to_char(int i);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char(i);
			my_putchar(' ');
			int_to_char(j);
			if (!(i == 98 && j == 99))
			{
				my_putchar(',');
				my_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	char	x;
	char	y;

	x = i / 10 + '0';
	y = i % 10 + '0';
	write(1, &x, 1);
	write(1, &y, 1);
}
