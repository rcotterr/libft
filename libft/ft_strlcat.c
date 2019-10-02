/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:25:20 by rcotter-          #+#    #+#             */
/*   Updated: 2018/11/27 15:25:23 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*c;
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	if (d == size)
		return (d + s);
	if (d > size)
		return (size + s);
	else if (d < size && d != 0)
		c = ft_strncat(dst, src, (size - d - 1));
	if (d == 0)
		c = ft_strncat(dst, src, size - 1);
	return (d + s);
}
