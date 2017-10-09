/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 19:44:51 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/08 19:42:02 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node;

	if (*alst != NULL)
		while (*alst != NULL)
		{
			node = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = NULL;
			*alst = node;
		}
}
