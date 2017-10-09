/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_lstsize.c                                         :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: rolandovlz <rolandovlz@gmail.com>            +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 17:28:51 by rolandovlz          #+#    #+#             */
/*   Updated: 2017/10/08 17:30:44 by rolandovlz         ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */

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
