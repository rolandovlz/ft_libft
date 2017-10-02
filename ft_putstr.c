/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 18:43:11 by rvelez            #+#    #+#             */
/*   Updated: 2017/09/25 14:15:02 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	if (s)
		while (i < ft_strlen(s))
		{
			ft_putchar(s[i]);
			i++;
		}
}
