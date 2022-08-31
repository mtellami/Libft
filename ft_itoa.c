/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:27:37 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/31 17:54:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digit_count(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	if (n == 0)
		count++;
	while (n >= 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		i;
	long int	nbr;

	nbr = n;
	i = ft_digit_count(nbr);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	res[i--] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		res[i--] = 48 + (n % 10);
		n /= 10;
	}
	if (n == 0)
		res[0] = 48;
	return (res);
}
