/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:55:20 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/13 23:17:31 by stmartin         ###   ########.fr       */
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
	if (!s)
		return (NULL);
	if (!(len = ft_strlen(s)))
		return (ft_strdup(s));
	lenstr = len;
	while (s && s[start] && (ft_isspace((int)s[start]) == 1))
		start++;
	while (s && len > 0 && (ft_isspace((int)s[len - 1]) == 1))
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
