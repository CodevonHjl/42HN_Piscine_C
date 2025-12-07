/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialhuan <jialhuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:49:11 by jialhuan          #+#    #+#             */
/*   Updated: 2025/08/17 17:51:46 by jialhuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	while (s2[i])
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_size(int size, char **strs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

char	*combine(int size, char *result, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
		{
			result = ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_sum;
	char	*strj;

	if (size == 0)
	{
		strj = malloc(1 * sizeof(char));
		if (!strj)
			return (0);
		strj[0] = '\0';
		return (strj);
	}
	size_sum = count_size(size, strs) + ft_len(sep) * (size - 1);
	strj = malloc (sizeof (char) * (size_sum + 1));
	if (!strj)
		return (0);
	strj[0] = '\0';
	combine(size, strj, strs, sep);
	return (strj);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*arr[] = {"Hello", "world", "42"};
// 	char	*result;
// 	result = ft_strjoin(3, arr, "--");
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }