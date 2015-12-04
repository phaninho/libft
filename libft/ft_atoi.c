/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:42:26 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/03 11:04:29 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		sign;

	i = 0;
	nb = 0;
	sign = 0;
	if (ft_isalpha(str[i]) == 1 || str[i] == '\0')
		return (0);
	if ((str[i] >= 33 && str[i] <= 42) || str[i] == 44 || str[i] == 46 
			|| str[i] == 47)
		        return (0);
	while(!((str[i] >= '0' && str[i] <= '9') || str[i] == '-' 
				|| str[i] == '+'))
		i++;
	if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if ((str[i] == '-' || str[i] == '+') && (str[i - 1] == '-' || 
				str[i - 1] == '+'))
		return (0);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (sign == 1)
		nb = -nb;
	return (nb);
}
