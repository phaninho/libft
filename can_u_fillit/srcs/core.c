/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 14:57:18 by jmaccion          #+#    #+#             */
/*   Updated: 2016/01/19 16:59:14 by jmaccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libit.h"

int		check_line(int *tetra, char **map, int y, int x)
{
	int		nbr;

	nbr = 0;
	if (tetra[0] == 0)
		return (0);
	while (nbr != tetra[0] && map[y] && map[y][x])
	{
		if (map[y][x] == '.')
		{
			nbr++;
			x++;
			map[y][x] = '#';
		}
		else
			return (1);
	}
	return ((nbr == tetra[0]) ? 0 : 1);
}

int		check_position(int **tetra, char **map, int y, int x)
{
	int		i;

	i = 0;
	// faire une copie de la map
	while (i < 4)
	{
		if (check_line(tetra[i], map, y, x))
		{
			// restaurer la map d'origine
			return (1);
		}
		i++;
		if (i == 4)
			break ;
		x += tetra[i][1];
		y++;
	}
	return (0);
}

int		core(int ***tetra, char **map)
{
	int		x;
	int		y;
	int		nbr;


	y = 0;
	x = 0;
	nbr = 0;
	if (!tetra)
		return (1);
	while (map[y])
	{
		while (map[y][x])
		{
			/* printf("%c ", map[y][x]); */
			if (!check_position(tetra[nbr], map, y, x))
			{
				printf(C_GREEN);
				printf("-- forme n* %d placed --\n", nbr);
				printf(C_NONE);
				nbr++;
				if (nbr == 3)
					return (0) ;
			}
			x++;
		}
		y++;
		x = 0;
		printf("\n");
	}
	print_map(map);
	print_data(tetra);
	return (0);
}
