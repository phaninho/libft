/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:07:49 by stmartin          #+#    #+#             */
/*   Updated: 2015/11/30 17:33:50 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*s2 == 0)
		return ((char *)s1);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i])
		{
			j = 0;
			while (s1[i + j] == s2[j])
			{
				if (s2[j + 1] == '\0')
					return ((char*)&s1[i]);
				else
					j++;
			}
			i++;
		}
	}
	return ((char*)&s1[i]);
}
