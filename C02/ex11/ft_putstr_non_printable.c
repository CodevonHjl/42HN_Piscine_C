/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:51:49 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/09 14:45:35 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_hex(char c)
{
	int		i;
	int		j;
	char	*hex;

	hex = "0123456789abcdef";
	i = c / 16;
	j = c % 16;
	write(1, "\\", 1);
	write(1, &hex[i], 1);
	write(1, &hex[j], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			put_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
