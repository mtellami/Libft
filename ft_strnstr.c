/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:42:29 by mtellami          #+#    #+#             */
/*   Updated: 2022/09/03 15:12:40 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(*little))
		return ((char *)big);
	while (*big && len--)
	{
		i = 0;
		while (little[i] == big[i] && i <= len)
		{
			if (!little[i + 1])
				return ((char *)big);
			i++;
		}
		big++;
	}
	return (0);
}
