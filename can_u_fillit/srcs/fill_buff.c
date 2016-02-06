/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_buff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:39:26 by stmartin          #+#    #+#             */
/*   Updated: 2016/01/08 16:43:29 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libit.h"

char	*fill_buff(int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*str;
	int		oct;

	oct = 1;
	if (!(str = (char *)malloc(sizeof(char))))
		return (NULL);
	while ((oct = read(fd, buff, BUFF_SIZE)))
	{
		buff[oct] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (str);
}