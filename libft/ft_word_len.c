/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 23:15:28 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/13 23:15:32 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_word_len(const char *s, char c, size_t *wordlen)
{
	size_t	i;
	size_t	ltr;
	size_t	word;

	i = 0;
	word = 0;
	ltr = ft_strlen(s);
	while (s && s[i])
	{
		i = ft_move_sign(s, c, i);
		if (i == ltr)
			return (0);
		ltr = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			ltr++;
		}
		if (ltr != 0)
		{
			wordlen[word] = ltr;
			word++;
		}
		i++;
	}
	return (wordlen);
}
