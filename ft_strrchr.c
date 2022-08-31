/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:02:27 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/31 17:56:10 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;

	a = (char)c;
	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == a)
			return ((char *)&s[1]);
		i--;
	}
	if (s[i] == a)
		return ((char *)s);
	return (0);
}
