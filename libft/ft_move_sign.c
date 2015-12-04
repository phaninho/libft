/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_sign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:20:47 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/04 21:00:24 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_move_sign(const char *s, char c, size_t i)
{
	while ((s && s[i]) && s[i] == c)
		i++;
	return (i);
}
