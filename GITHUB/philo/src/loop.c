#include "../inc/philo.h"

// void	ft_usleep(int ms)
// {
// 	long int	time;

// 	time = get_tiem();
// 	while (timestamp() - time < ms)
// 		usleep(ms / 10);
// }

int	ft_pick_fork(t_philo *philo)
{
	pthread_mutex_lock(philo->right_fork);
	ft_print_fork(philo, philo->name);
	if (philo->inf->nbr_of_philo == 1)
	{
		ft_usleep(philo->inf->time_to_die);
		print_message(philo, "is dead");
		ft_check_dead(1, philo);
		return (0);
	}
	pthread_mutex_lock(philo->left_fork);
	ft_print_fork(philo, philo->name);
	return (0);
}
int	ft_eat(t_philo *philo)
{
	ft_print_eating(philo);
	pthread_mutex_lock(&philo->inf->meal);
	philo->time_last_eat = ft_get_current_time();
	philo->meals_count++;
	pthread_mutex_unlock(&philo->inf->meal);
	ft_usleep(philo->inf->time_to_eat);
	ft_drop_fork(philo);
	ft_sleep(philo);
	ft_think(philo);
	return (0);
}

int	ft_drop_fork(t_philo *philo)
{
	pthread_mutex_unlock(philo->right_fork);
	pthread_mutex_unlock(philo->left_fork);
	return (0);
}

int	ft_sleep(t_philo *philo)
{
	ft_print_sleeping(philo);
	// print_message(philo, " is sleeping");
	ft_usleep(philo->inf->time_to_sleep);
	return (0);
}

int	ft_think(t_philo *philo)
{
	// ft_print_thinking(philo);
	print_message(philo, "is thinking");
	return (0);
}