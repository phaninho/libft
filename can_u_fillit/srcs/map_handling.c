/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_handling.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 18:48:34 by stmartin          #+#    #+#             */
/*   Updated: 2016/01/19 14:49:58 by jmaccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libit.h"

/*
** Affiche la map recue en parametre sur la sortie standard
*/

void	print_map(char **map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (map && map[i])
	{
		while (map[i][j])
		{
			ft_putchar(map[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		j = 0;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

/*
** Cree une nouvelle map a la bonne taille
** Si une map existait auparavant, ses donnees sont copiees dans la nouvelle
** map et la memoire est liberee.
*/

char		**map_alloc(char **map, int size)
{
	int		i;
	char 	**new_map;

	i = 0;
	if (!(new_map = (char **)malloc(sizeof(char *) * (size + 1))))
		ft_error();
	new_map[size] = NULL;
	while (i < size)
	{
		if (!(new_map[i] = (char *)malloc(sizeof(char) * size + 1)))
			ft_error();
		new_map[i][size] = '\0';
		ft_memset(new_map[i], '.', size);
		if (map && map[i])
		{
			ft_memcpy(new_map[i], map[i], size - 1);
			free(map[i]);
		}
		i++;
	}
	if (map)
		free(map);
	return (new_map);
}
