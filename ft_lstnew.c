/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 19:20:08 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/06 14:29:35 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;
	void	*temp;

	if (!(temp = ft_memalloc(content_size + 1)))
		return (NULL);
	else if (!content)
	{
		temp = NULL;
		content_size = 0;
	}
	else
		ft_memcpy(temp, content, content_size);
	if (!(head = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	head->content = temp;
	head->content_size = content_size;
	head->next = NULL;
	return (head);
}
