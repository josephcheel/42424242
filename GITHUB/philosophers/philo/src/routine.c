#include "../inc/philo.h"

void	*meal_checks(void *data)
{
	t_philo *philo;

	philo = ((t_philo *)data);
	pthread_mutex_lock(&philo->inf->meal);
	while(philo->inf->dead == 0)
	{
		if (philo->inf->eaten == philo->inf->nbr_of_philo)
		{
			philo->inf->dead = 1;
			philo->inf->finished = 1;
		}// printf("DEATH %d", inf->dead);
		pthread_mutex_unlock(&philo->inf->meal);
	}
	return (NULL);
}

void	*supervisor(void *data)
{
	t_philo *philo;

	philo = ((t_philo *)data);
	pthread_mutex_lock(&philo->inf->lock);
	while(philo->inf->dead == 0)
	{
		if (ft_actual_time(philo->inf) - philo->time_last_eat  > philo->inf->time_to_die && 
			philo->eating == 0 && philo->inf->dead == 0)
		{
			printf("TIMEOUUUUTTT");	
			philo->inf->dead = 1;
		}
		pthread_mutex_lock(&philo->inf->meal);
		if (philo->meals_count == philo->inf->nbr_of_meals && philo->finished == 0)
		{
			philo->inf->eaten += 1;
			philo->finished = 1;
		}
		pthread_mutex_unlock(&philo->inf->meal);
		printf("NBR MEALS EATEN   : %d\n", philo->inf->eaten);
		printf("NAME %d MEAL_COUNT: %d == %d && %d\n", philo->name, philo->meals_count, philo->inf->nbr_of_meals, philo->finished );
	}
	pthread_mutex_unlock(&philo->inf->lock);
	return (NULL);
}

void	*ft_routine(void *data)
{
	t_philo *philo;

	philo = ((t_philo *)data);
	pthread_create(&philo->super, NULL, &supervisor, philo);
	if (philo->inf->nbr_of_philo == 1)
		philo->inf->dead = 1;
	while (philo->inf->dead == 0)
	{
		ft_pick_fork(philo);
		ft_eat(philo);
		ft_drop_fork(philo);
		ft_sleep(philo);
		ft_think(philo);
	}
	pthread_join(philo->super, NULL);
	pthread_mutex_lock(&philo->inf->lock);
	pthread_mutex_lock(&philo->inf->meal);
	
	if (philo->inf->finished == 0 && philo->inf->dead == 1)
	{	
		ft_print_dead(philo);
		philo->inf->finished = 1;
	}	
	pthread_mutex_unlock(&philo->inf->lock);
	pthread_mutex_unlock(&philo->inf->meal);		
	return (NULL);
}