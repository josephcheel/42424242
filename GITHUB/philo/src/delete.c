/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:18:20 by jcheel-n          #+#    #+#             */
/*   Updated: 2023/10/25 18:42:40 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	ft_delete(t_inf *inf)
{
	int	i;

	i = -1;

	while (++i < inf->nbr_of_philo)
	{
		pthread_mutex_destroy(&inf->forks[i]);
	}
	// if (inf->forks)
	// 	free(inf->forks);
	if (inf->philos)
		free(inf->philos);
	pthread_mutex_destroy(&inf->writer);
	pthread_mutex_destroy(&inf->stop);
	pthread_mutex_destroy(&inf->death);
	pthread_mutex_destroy(&inf->meal);
}
