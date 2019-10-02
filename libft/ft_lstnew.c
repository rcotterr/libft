/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 14:31:12 by rcotter-          #+#    #+#             */
/*   Updated: 2018/12/11 14:31:16 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*str;

	if (!(str = (t_list *)(malloc(sizeof(t_list)))))
	{
		free(str);
		return (NULL);
	}
	if (content == NULL)
	{
		str->content = NULL;
		str->content_size = 0;
		str->next = NULL;
		return (str);
	}
	if (!(str->content = malloc(content_size)))
		return (NULL);
	ft_memcpy(str->content, content, content_size);
	str->content_size = content_size;
	str->next = NULL;
	return (str);
}
