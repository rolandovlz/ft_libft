/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_strsplit.c                                        :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: rolandovlz <rolandovlz@gmail.com>            +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 17:09:08 by rolandovlz          #+#    #+#             */
/*   Updated: 2017/10/08 17:09:11 by rolandovlz         ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */

#include "libft.h"

static int	pos(char const *str, int p, char c)
{
	int		length;

	length = 0;
	while (str[p] && str[p] != c)
	{
		length++;
		p++;
	}
	return (length);
}

char		**ft_strsplit(char const *s, char c)
{
	int		wordcount;
	int		i;
	int		j;
	int		k;
	char	**res;

	i = 0;
	j = 0;
	wordcount = ft_wordcount_by_delim((char *)s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (wordcount + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			if (!(res[j] = (char *)malloc(sizeof(char) * (pos(s, i, c) + 1))))
				return (NULL);
			while (s[i] && s[i] != c)
				res[j][k++] = s[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}
