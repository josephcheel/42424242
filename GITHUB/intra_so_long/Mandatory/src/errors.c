/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:47:01 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/07/21 14:49:27 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// void	error_array(t_map *map)
// {
// 	write(2, "Error\n", 6);
// 	write(2, "failed array\n", 13);
// 	exit(EXIT_FAILURE);
// }

void	error_filename(void)
{
	write(2, "\033[1;31m🛑ERROR: \033[0m", 18);
	write(2, "Filename should be a BER extension file\n", 40);
	exit(EXIT_FAILURE);
}

void	error_wall(t_map *map)
{
	write(2, "Error\n", 6);
	write(2, "failed wall\n", 12);
	ft_free_array(map->array, map->y);
	ft_free_array(map->copy, map->y);
	exit(EXIT_FAILURE);
}

void	error_openfile(void)
{
	write(2, "Error\n", 6);
	write(2, "failed open\n", 12);
	exit(EXIT_FAILURE);
}

void	error_size(t_map *map)
{
	write(2, "Error\n", 6);
	write(2, "failed size\n", 12);
	ft_free_array(map->array, map->y);
	ft_free_array(map->copy, map->y);
	exit(EXIT_FAILURE);
}
