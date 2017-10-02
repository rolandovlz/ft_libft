/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:09:31 by exam              #+#    #+#             */
/*   Updated: 2017/10/02 15:21:22 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_units(int n)
{
	int		units;

	units = 0;
	while (n != 0)
	{
		n = n / 10;
		units++;
	}
	return (units);
}

static void	ft_tens(int n, char *str)
{
	if (n >= 0)
	{
		str[0] = (n + '0');
		str[1] = '\0';
	}
	else
	{
		str[0] = '-';
		str[1] = (-n + '0');
		str[2] = '\0';
	}
}

static void	ft_tens_and_beyond(int n, int units, char *str)
{
	if (n > 0)
	{
		str[units] = '\0';
		units--;
		while (units >= 0)
		{
			str[units] = ((n % 10) + '0');
			n = n / 10;
			units--;
		}
	}
	else
	{
		str[units + 1] = '\0';
		str[0] = '-';
		while (units > 0)
		{
			str[units] = (-(n % 10) + '0');
			n = n / 10;
			units--;
		}
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	int		units;

	units = ft_units(n);
	if (!(str = (char *)malloc(sizeof(char) * units + 2)))
		return (NULL);
	if (n > -10 && n < 10)
	{
		ft_tens(n, str);
	}
	else
	{
		ft_tens_and_beyond(n, units, str);
	}
	return (str);
}
