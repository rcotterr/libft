/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:24:57 by rcotter-          #+#    #+#             */
/*   Updated: 2018/12/12 18:10:44 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while ((int)i >= 0)
	{
		str[i] = s1[i];
		i--;
	}
	return (str);
}
