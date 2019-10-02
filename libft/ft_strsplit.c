/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:52:56 by rcotter-          #+#    #+#             */
/*   Updated: 2018/12/12 17:22:57 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_word(char const *arr, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (arr[0] == '\0')
		return (count);
	while (i <= ft_strlen(arr))
	{
		while (arr[i] != c && i < ft_strlen(arr))
			i++;
		if (arr[i] == c || arr[i] == '\0')
			count++;
		while (arr[i] == c)
			i++;
		i++;
	}
	i--;
	if (arr[i] == c)
		count = count - 1;
	if (arr[0] == c)
		count = count - 1;
	return (count);
}

static size_t	ft_length(const char *arr, char c)
{
	size_t len;
	size_t i;

	i = 0;
	len = 0;
	while (i <= ft_strlen(arr))
	{
		while (arr[i] == c)
			i++;
		while (arr[i] != c && arr[i] != '\0')
		{
			len++;
			i++;
		}
		if (arr[i] == c || arr[i] == '\0')
			return (len);
		i++;
	}
	return (len);
}

static size_t	ft_misdelim(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static void		*ft_del(char **out, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i && out[j])
	{
		free(out[i]);
		out[i] = NULL;
		j++;
	}
	free(out);
	out = NULL;
	return (out);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		count;
	char		**out;

	i = 0;
	if (!(s && c))
		return (NULL);
	count = ft_count_word(s, c);
	if (!(out = (char **)(malloc(sizeof(char *) * (count + 1)))))
		return (NULL);
	while (i < count)
	{
		if (!(out[i] = ft_memalloc(ft_length(s, c) + 1)))
			return (ft_del(out, i));
		s = s + ft_misdelim(s, c);
		ft_strncpy(out[i], s, ft_length(s, c));
		s = s + ft_length(s, c);
		i++;
	}
	out[i] = NULL;
	return (out);
}
