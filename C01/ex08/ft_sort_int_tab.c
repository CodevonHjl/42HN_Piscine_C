/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:09:54 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/05 18:44:32 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	max;

	i = 0;
	while (i < size -1)
	{
		x = i + 1;
		while (x < size)
		{
			if (tab[i] > tab[x])
			{
				max = tab[i];
				tab[i] = tab[x];
				tab[x] = max;
			}
			x++;
		}
		i++;
	}
}
