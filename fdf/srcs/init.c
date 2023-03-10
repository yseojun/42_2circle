/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojyang <seojyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:43:08 by seojyang          #+#    #+#             */
/*   Updated: 2023/02/09 15:15:54 by seojyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.h"

void	init_map(t_map *map)
{
	map->height = 0;
	map->width = 0;
	map->value = 0;
	map->color = 0;
	map->is_color = 0;
	map->magnitude = 0;
	map->degree = M_PI / 6;
	map->x_max = 0;
	map->x_min = 0;
	map->y_max = 0;
	map->y_min = 0;
}

void	init_value(t_map *map)
{
	int	height;
	int	width;

	height = 0;
	map->value = (int **)malloc(sizeof(int *) * map->height);
	while (height < map->height)
	{
		map->value[height] = (int *)malloc(sizeof(int) * map->width);
		width = 0;
		while (width < map->width)
			map->value[height][width++] = 0;
		height++;
	}
}

t_draw	**init_draw(t_map *map)
{
	t_draw	**draw;
	int		height;

	height = 0;
	draw = (t_draw **)malloc(sizeof(t_draw *) * map->height);
	while (height < map->height)
	{
		draw[height] = (t_draw *)malloc(sizeof(t_draw) * map->width);
		height++;
	}
	return (draw);
}

void	init_color(t_map *map)
{
	int	height;
	int	width;

	height = 0;
	map->color = (int **)malloc(sizeof(int *) * map->height);
	while (height < map->height)
	{
		map->color[height] = (int *)malloc(sizeof(int) * map->width);
		width = 0;
		while (width < map->width)
			map->color[height][width++] = 0xffffff;
		height++;
	}
}
