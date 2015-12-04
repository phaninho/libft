/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:46:02 by stmartin          #+#    #+#             */
/*   Updated: 2015/11/26 11:25:05 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	if (!s1)
		return (NULL);
	dst = malloc(ft_strlen(s1) + 1);
	if (dst != NULL)
		ft_strcpy(dst, s1);
	return (dst);
}
