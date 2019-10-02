/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:30:25 by rcotter-          #+#    #+#             */
/*   Updated: 2018/12/12 18:08:28 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	if ((!*haystack && !*needle) || !*needle)
		return ((char *)haystack);
	if (ft_strlen(needle) > len)
		return (NULL);
	i = 0;
	while (*haystack != '\0' && i <= len)
	{
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			if ((len - i) >= ft_strlen(needle))
				return ((char *)haystack);
		haystack++;
		i++;
	}
	if (i == len && *haystack)
		return ((char *)haystack);
	return (NULL);
}
