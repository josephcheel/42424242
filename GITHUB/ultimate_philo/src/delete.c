/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:18:20 by jcheel-n          #+#    #+#             */
/*   Updated: 2023/10/26 00:59:09 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	ft_delete(t_inf *inf, int forks, int general_mutex, int allocation)
{
	int	i;

	i = -1;
	if (forks)
	{
		while (++i < inf->nbr_of_philo)
			pthread_mutex_destroy(&inf->forks[i]);
	}
	if (general_mutex)
	{
		if (inf->forks)
			free(inf->forks);
		if (inf->philos)
			free(inf->philos);
	}
	if (allocation)
	{
		pthread_mutex_destroy(&inf->writer);
		pthread_mutex_destroy(&inf->death);
		pthread_mutex_destroy(&inf->meal);
	}
}
