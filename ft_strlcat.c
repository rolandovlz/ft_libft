/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 11:03:06 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/02 11:43:39 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
