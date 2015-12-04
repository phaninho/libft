/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:55:20 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/03 10:56:23 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	lenstr;
	char	*str;

	start = 0;
	end = 0;
	len = ft_strlen(s);
	lenstr = len;
	if (!s)
		return (NULL);
	while (ft_isspace((int)s[start]) == 1)
		start++;
	while (ft_isspace((int)s[len - 1]) == 1)
	{
		len--;
		end++;
	}
	if (start == end)
		start = 0;
	lenstr = lenstr - (start + end);
	str = ft_strsub(s, start, lenstr);
	return (str);
}
