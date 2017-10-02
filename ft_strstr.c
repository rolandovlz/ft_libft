/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:17:30 by rvelez            #+#    #+#             */
/*   Updated: 2017/09/22 09:54:06 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, char *little)
{
	char *temp_str;
	char *temp_to_find;

	temp_str = (char *)big;
	temp_to_find = (char *)little;
	if (big[0] == '\0' && little[0] != '\0')
		return (0);
	while (*temp_to_find != 0)
	{
		if (*temp_to_find == *temp_str)
		{
			temp_str++;
			temp_to_find++;
		}
		else
		{
			temp_to_find = (char *)little;
			temp_str = (char *)++big;
			if (*temp_str == 0)
				return (0);
		}
	}
	return ((char *)big);
}
