/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libit.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 17:45:57 by stmartin          #+#    #+#             */
/*   Updated: 2016/01/19 15:20:35 by jmaccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBIT_H
# define LIBIT_H

# include "libft.h"
# include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFF_SIZE 10

typedef struct		s_coord
{
	int	x;
	int	y;
}					t_coord;

int					checkbuff(char *buff);
int					check_valid(char *buff);
t_coord				**add_coord(char *buff, size_t i, int x, int y);
char				*fill_buff(int fd);
int					check_diez(t_coord **coord, int x, int y, int valid);
t_coord				*init_tet(t_coord *coord, int y);
int					**add_element(t_coord *cord);
char				**join_tetra(int ***tetra, int cnt, int i, int size);
//
void				solver(int ***tetra);
void				print_map(char **map);
// void				map_alloc(char ***map, int size);
char				**map_alloc(char **map, int size);
void				ft_error(void);
int					core(int ***tetra, char **map);

// TOOL
void	print_data(int ***tetra);
#endif
