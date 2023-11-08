#include "../inc/philo.h"

int	ft_create_threads(t_inf *inf)
{
	int	i;

	i = -1;
	while (++i < inf->nbr_of_philo)
	{
		if (pthread_create(&inf->ths[i], NULL, &ft_routine, &(inf->philos[i])) != 0)
			return (-1);
	}
	i = -1;
	while (++i < inf->nbr_of_philo)
	{
		if (pthread_join(inf->ths[i], NULL) != 0)
			return (-1);
	}
	return (0);
}
