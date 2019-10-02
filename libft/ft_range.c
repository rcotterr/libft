/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:08:42 by rcotter-          #+#    #+#             */
/*   Updated: 2018/11/23 17:08:44 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;
	int j;

	if (min < max)
	{
		i = min;
		j = 0;
		arr = malloc(sizeof(int) * (max - min));
		while (i < max)
		{
			arr[j] = i++;
			j++;
		}
		return (arr);
	}
	else
		return (0);
}
