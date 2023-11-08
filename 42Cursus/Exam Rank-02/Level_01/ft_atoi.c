

int	ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	
	while (str[i] <= 32 || str[i] == '+')
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		//result *= 10;
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
