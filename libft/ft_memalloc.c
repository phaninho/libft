/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:21:47 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/05 17:49:57 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (size == 0)
		return (NULL);
	str = malloc(size);
	if (!(str))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
