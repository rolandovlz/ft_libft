/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:43:17 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/18 20:44:43 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_getnextword(const char *s, char c, size_t *i)
{
	size_t	j;

	while (s[*i] == c)
		*i += 1;
	j = *i;
	while (s[*i])
	{
		if (s[*i] == c)
			break ;
		*i += 1;
	}
	return (ft_strsub(s, j, *i - j));
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	strindex;
	int		wordcount;
	int		i;
	char	**res;

	i = 0;
	strindex = 0;
	wordcount = ft_wordcount_by_delim((char *)s, c);
	if (!(res = (char **)ft_memalloc(sizeof(char *) * (wordcount + 1))))
		return (NULL);
	while (i < wordcount)
		res[i++] = ft_getnextword(s, c, &strindex);
	res[i] = NULL;
	return (res);
}
