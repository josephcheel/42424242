/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:51:46 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/07/29 13:56:09 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long_bonus.h"

void	error_array(void)
{
	write(2, "Error\n", 6);
	write(2, "failed array\n", 13);
	exit(EXIT_FAILURE);
}

void	error_filename(void)
{
	write(2, "\033[1;31m🛑ERROR: \033[0m", 18);
	write(2, "Filename should be a BER extension file\n", 40);
	exit(EXIT_FAILURE);
}

void	error_wall(void)
{
	write(2, "Error\n", 6);
	write(2, "failed wall\n", 12);
	exit(EXIT_FAILURE);
}

void	error_openfile(void)
{
	write(2, "Error\n", 6);
	write(2, "failed open\n", 12);
	exit(EXIT_FAILURE);
}

void	error_size(void)
{
	write(2, "Error\n", 6);
	write(2, "failed size\n", 12);
	exit(EXIT_FAILURE);
}
