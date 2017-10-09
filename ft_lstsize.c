/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:41:18 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/08 19:41:20 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *head)
{
	int		count;
	t_list	*node;

	node = head;
	count = 0;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
