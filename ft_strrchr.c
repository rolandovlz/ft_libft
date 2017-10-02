/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 15:40:01 by rvelez            #+#    #+#             */
/*   Updated: 2017/09/27 15:47:26 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	last_oc;
	size_t	len;
	char	*str;

	i = 0;
	last_oc = 0;
	len = ft_strlen(s);
	str = (char *)s;
	while (i < len && str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_oc = i;
		i++;
	}
	if (str[i] == (char)c)
		return (str + i);
	else if (last_oc != 0)
		return (str + last_oc);
	else
		return (NULL);
}
