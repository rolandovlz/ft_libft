/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:27:34 by rvelez            #+#    #+#             */
/*   Updated: 2017/10/05 18:27:36 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *str)
{
	int i;
	int n;
	int is_word;

	i = 0;
	n = 0;
	is_word = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			is_word = 1;
			i++;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			if (is_word)
				n++;
			is_word = 0;
			i++;
		}
	}
	return (n);
}
