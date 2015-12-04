/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c 		                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:24:45 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/04 21:02:55 by stmartin         ###   ########.fr       */
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
	while (s && s[i])
	{
		ltr = 0;
		i = ft_move_sign(s, c, i);
		while (s[i] && s[i] != c)
		{
			i++;
			ltr++;
		}
		if (ltr != 0)
			wordlen[word++] = ltr;
		i++;
	}
	return (wordlen);
}
