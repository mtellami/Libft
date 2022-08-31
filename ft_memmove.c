/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:03:30 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/31 17:54:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char tmp[n];

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		tmp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while ( i < n)
	{
		((unsigned char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}
