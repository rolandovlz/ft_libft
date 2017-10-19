/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount_by_delim.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 18:02:26 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/13 16:12:23 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount_by_delim(char *str, char c)
{
	int count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			if (*(str + 1) == c || *(str + 1) == '\0')
				count++;
			str++;
		}
	}
	return (count);
}
