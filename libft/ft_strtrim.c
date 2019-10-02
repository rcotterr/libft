/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 14:56:41 by rcotter-          #+#    #+#             */
/*   Updated: 2018/12/12 17:24:05 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t') &&
	len)
		len--;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && len)
	{
		i++;
		len--;
	}
	if (!(str = (char *)(malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	while (len--)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
