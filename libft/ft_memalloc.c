/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:16:33 by rcotter-          #+#    #+#             */
/*   Updated: 2018/12/07 14:51:58 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *arr;

	if (!(arr = (void *)(malloc(size))))
		return (NULL);
	while (size > 0)
	{
		((char *)arr)[size - 1] = '\0';
		size--;
	}
	return (arr);
}
