#include "../inc/philo.h"

int	ft_check_dead(int set_dead, t_philo *philo)
{
	int i;
	int full_philos;

	i = 0;
	full_philos = 0;
	pthread_mutex_lock(&philo->inf->death);
	if (set_dead)
		philo->inf->dead = 1;
	if (philo->inf->dead)
	{
		pthread_mutex_unlock(&philo->inf->death);
		return (1);
	}
	pthread_mutex_unlock(&philo->inf->death);
	
	while (i < philo->inf->nbr_of_philo)
	{
		if (philo->meals_count == philo->inf->nbr_of_meals)
		{
			full_philos++;
		}
		i++;
	}
	if (full_philos == philo->inf->nbr_of_philo)
		return (1);
	
	return (0);
}

void	*supervisor(void *data)
{
	t_philo *philo;

	philo = ((t_philo *)data);
	ft_usleep(philo->inf->time_to_die + 1);
	pthread_mutex_lock(&philo->inf->meal);
	pthread_mutex_lock(&philo->inf->stop);
	if (!ft_check_dead(0, philo) && ft_get_current_time() - philo->time_last_eat >= (long)(philo->inf->time_to_die)) //
	{
		pthread_mutex_unlock(&philo->inf->meal);
		pthread_mutex_unlock(&philo->inf->stop);
		print_message(philo, "died");
		ft_check_dead(1, philo);
	}
	pthread_mutex_unlock(&philo->inf->meal);
	pthread_mutex_unlock(&philo->inf->stop);
	return (NULL);
}

void	*ft_routine(void *data)
{
	t_philo *philo;
	
	philo = ((t_philo *)data);
	if (philo->name % 2 == 0)
		ft_usleep(philo->inf->time_to_eat / 10);
	while (!ft_check_dead(0, philo))
	{
		pthread_create(&philo->super, NULL, supervisor, philo);
		ft_pick_fork(philo);
		ft_eat(philo);	
		pthread_detach(philo->super);
	}	
	return (NULL);
}