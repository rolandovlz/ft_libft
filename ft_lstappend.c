/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:16:23 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/08 19:20:25 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **head, t_list *fresh_list)
{
	t_list *node;

	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = fresh_list;
	}
	else
		*head = fresh_list;
}
