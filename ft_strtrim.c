/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 11:03:20 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/06 13:24:33 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(const char *s)
{
	char	*start;
	char	*end;

	if (!s)
		return (NULL);
	start = (char *)s;
	end = ft_strchr(s, 0) - 1;
	while (is_whitespace(*start))
		++start;
	while (is_whitespace(*end) && end > start)
		--end;
	return (ft_strsub(start, 0, 1 + end - start));
}
