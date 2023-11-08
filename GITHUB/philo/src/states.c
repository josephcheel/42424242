#include "../inc/philo.h"

void	ft_print_fork(t_philo *philo, int name)
{
	pthread_mutex_lock(&philo->inf->writer);
	if (!philo->inf->dead && !ft_check_dead(0, philo))
		printf("%ld %d has taken a fork\n", ft_get_time(philo->inf), name);
	pthread_mutex_unlock(&philo->inf->writer);
}

void	ft_print_eating(t_philo *philo)
{	
	pthread_mutex_lock(&philo->inf->writer);
	if (!philo->inf->dead && !ft_check_dead(0, philo))
		printf("%ld %d is eating\n", ft_get_time(philo->inf), philo->name);
	pthread_mutex_unlock(&philo->inf->writer);
}

void	ft_print_sleeping(t_philo *philo)
{	
	pthread_mutex_lock(&philo->inf->writer);
	if (!ft_check_dead(0, philo))
		printf("%ld %d is sleeping\n", ft_get_time(philo->inf), philo->name);
	pthread_mutex_unlock(&philo->inf->writer);
}

void	ft_print_thinking(t_philo *philo)
{
	pthread_mutex_lock(&philo->inf->writer);
	if (!philo->inf->dead && !ft_check_dead(0, philo))
		printf("%ld %d is thinking\n", ft_get_time(philo->inf), philo->name);
	pthread_mutex_unlock(&philo->inf->writer);
}

void	ft_print_dead(t_philo *philo)
{
	pthread_mutex_lock(&philo->inf->writer);
	if (!philo->inf->dead && !ft_check_dead(0, philo))
		printf("%ld %d died\n", ft_get_time(philo->inf), philo->name);
	pthread_mutex_unlock(&philo->inf->writer);
}



long long	ft_get_current_time(void)
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	return ((current_time.tv_sec * 1000 + current_time.tv_usec / 1000));
}

time_t	ft_get_time(t_inf *inf)
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	return ((current_time.tv_sec * 1000 + current_time.tv_usec / 1000) - inf->start_time);
}

void	ft_usleep(int ms)
{
	long int	start;

	start = ft_get_current_time();
	while (ft_get_current_time() - start < ms)
		usleep(ms / 10);
}

void print_message(t_philo *philo, char *msg)
{
	time_t	time;
	
	time = ft_get_time(philo->inf);
	pthread_mutex_lock(&philo->inf->writer);
	if (!ft_check_dead(0, philo))
		printf("%ld %d %s\n", time, philo->name, msg);
	pthread_mutex_unlock(&philo->inf->writer);
}
