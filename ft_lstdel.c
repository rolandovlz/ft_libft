/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 19:44:51 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/02 19:53:20 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void *, size_t))
{
	while (*alst != NULL)
	{
		ft_lstdelone(alst, del);
		*alst = (*alst)->next;
	}
}
