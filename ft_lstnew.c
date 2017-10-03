/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 19:20:08 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/02 19:29:42 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;

	if(content == NULL)
	{
		head->content = NULL;
		head->content_size = 0;
		head->next = NULL;
	}
	else if ((head = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	else
	{
		head->content = (void *)content;
		head->content_size = content_size;
		head->next = NULL;
	}
	return (head);
}
