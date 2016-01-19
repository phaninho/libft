/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 08:27:53 by stmartin          #+#    #+#             */
/*   Updated: 2016/01/19 17:03:28 by jmaccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libit.h"

void	solver(int ***tetra)
{
	int		status;
	char	**map;
	int		size;

	map = NULL;
	size = 3;
	if (!tetra)
		return ;
	map = map_alloc(map, size); // 2x2
	/* while (++size < 10) */
	/* { */
	/* 	map = map_alloc(map, size); */
	/* 	print_map(map); */
	/* } */
	status = core(tetra, map);
	/* while (status == false) */
	/* { */
			/* map_alloc(map, ++size); */
	/* 		status = placement_tetri(liste); */
	/* } */
	/* print_map(map); */
}
