/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 12:23:20 by rvelez            #+#    #+#             */
/*   Updated: 2017/09/27 14:53:59 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	i;

	len1 = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[len1] = s2[i];
		i++;
		len1++;
	}
	s1[len1] = '\0';
	return (s1);
}
