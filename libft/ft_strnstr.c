/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:38:08 by stmartin          #+#    #+#             */
/*   Updated: 2015/11/30 17:49:48 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	if (s1 != NULL && s2 != NULL && n)
	{
		while (s1[i] && i < n)
		{
			j = 0;
			while (s1[i + j] == s2[j] && (i + j) < (n - 1))
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + i);
				else
					j++;
			}
			i++;
		}
	}
	return (NULL);
}
