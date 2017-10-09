/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:43:17 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/08 20:39:08 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	pos(char const *str, int p, char c)
{
	size_t	length;

	length = 0;
	while (str[p] && str[p] != c)
	{
		length++;
		p++;
	}
	return (length);
}

char			**ft_strsplit(char const *s, char c)
{
	int		index[2];
	int		k;
	int		wordcount;
	char	**res;

	index[0] = 0;
	index[1] = 0;
	wordcount = ft_wordcount_by_delim((char *)s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (wordcount + 1))))
		return (NULL);
	while (s[index[0]])
	{
		while (s[index[0]] && s[index[0]] == c)
			index[0]++;
		if (s[index[0]])
		{
			k = 0;
			res[index[1]] = ft_strnew(pos(s, index[0], c));
			while (s[index[0]] && s[index[0]] != c)
				res[index[1]][k++] = s[index[0]++];
			res[index[1]++][k] = '\0';
		}
	}
	res[index[1]] = NULL;
	return (res);
}
