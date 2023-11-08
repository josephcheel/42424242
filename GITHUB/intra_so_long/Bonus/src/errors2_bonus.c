/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:56:23 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/07/29 13:56:34 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long_bonus.h"

void	error_map_elements(void)
{
	write(2, "Error\n", 6);
	write(2, "failed elements\n", 17);
	exit(EXIT_FAILURE);
}

void	error_empty_line(void)
{
	write(2, "Error\n", 6);
	write(2, "failed: empty line on map\n", 27);
	exit(EXIT_FAILURE);
}

void	error_malloc(void)
{
	write(2, "Error\n", 6);
	write(2, "failed: malloc failed\n", 23);
	exit(EXIT_FAILURE);
}
