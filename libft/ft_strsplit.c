/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:08:02 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/04 22:07:30 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	*wordlen;
	size_t	word;
	size_t	i;
	size_t	n;

	i = 0;
	word = ft_countword_btwsign(s, c);
	if (word == 0)
		return (NULL);
	if (!(wordlen = (size_t *)malloc(sizeof(size_t) * word)))
		return (NULL);
	wordlen = ft_word_len(s, c, wordlen);
	if (!(str = (char **)malloc(sizeof(char *) * word + 1)))
		return (NULL);
	str[word] = NULL;
	n = 0;
	while (s[i] && n <= word)
	{
		if (s[i] == c)
			i = ft_move_sign(&s[i], c, i);
		str[n] = ft_strsub(s, i, wordlen[n]);
		i = i + wordlen[n];
		while (s[i] == c)
			i++;
		n++;
	}	
	return (str);
}
/*
int	main()
{
	int	i = 0;
	char **split;

	split = ft_strsplit("******hel*****lo***", '*');
	while (split && split[i])
	{
		ft_putstr(split[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}*/
