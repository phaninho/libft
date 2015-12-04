/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:32:42 by stmartin          #+#    #+#             */
/*   Updated: 2015/11/27 15:48:36 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*cps;

	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	while (s && s[i])
	{
		if (s[i] == (char)c)
			cps = ((char *)s + i);
		i++;
	}
	return (cps);
}
