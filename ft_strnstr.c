/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 11:02:40 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/02 11:43:57 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (ft_strlen(big) > 0)
	{
		if (big[0] == little[i])
			i++;
		else
		{
			big -= i;
			j -= i;
			i = 0;
		}
		if (j >= len)
			return (NULL);
		if (i == (int)ft_strlen(little))
			return ((char *)big - i + 1);
		big++;
		j++;
	}
	return (NULL);
}
