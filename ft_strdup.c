/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:03:04 by rvelez            #+#    #+#             */
/*   Updated: 2017/09/28 16:28:05 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!(str = ft_memalloc(ft_strlen(s1) + 1)))
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	return (str);
}
