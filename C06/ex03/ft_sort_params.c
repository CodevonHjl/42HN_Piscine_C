/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:03:52 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/14 12:13:50 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	scmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	swag_p(char **p1, char **p2)
{
	char	*temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 2)
		print_str(av[1]);
	if (ac > 2)
	{
		while (i < ac)
		{
			j = i + 1;
			while (j < ac)
			{
				if (scmp(av[i], av[j]) > 0)
				{
					swag_p(&av[i], &av[j]);
				}
				j++;
			}
			print_str(av[i]);
			i++;
		}
	}
	return (0);
}
