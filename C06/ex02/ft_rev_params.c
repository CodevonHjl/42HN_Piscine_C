/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:03:43 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/13 19:09:14 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	j;
	int	rev;

	rev = ac - 1;
	if (ac >= 2)
	{
		while (rev > 0)
		{
			j = 0;
			while (av[rev][j])
			{
				write(1, &av[rev][j], 1);
				j++;
			}
			write (1, "\n", 1);
			rev--;
		}
	}
	return (0);
}
