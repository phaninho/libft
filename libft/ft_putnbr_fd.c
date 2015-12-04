/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:54:51 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/02 14:51:02 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



void	ft_putnbr_fd(int nb, int fd)
{
	if (nb > -2147483648 && nb < 2147483647)
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
		if (nb < 10)
			ft_putchar_fd(nb + '0', fd);
		else
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putchar_fd((nb % 10) + '0', fd);
		}
	}
}
