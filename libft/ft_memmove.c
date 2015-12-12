/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:12:56 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/12 23:04:56 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;
	char	*overlp;

	i = 0;
	if (!(tmp = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	overlp = (char *)dst;
	while (i < len)
	{
		tmp[i] = *((char *)src++);
		i++;
	}
	while (i--)
		overlp[i] = tmp[i];
	return (dst);
}
