int stringword(char *str)
{	
	int i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	while (str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
		{
			i++;
			str++;
			while (*str == ' ' || *str == '\n' || *str == '\t')
				str++;
		}
	}
	return (i);
}

int	wordlen(cahr *str)
{
	int i = 0;
	
	while (!(str[i] == ' ' || *str[i] == '\n' || str[i] == '\t'))
		i++;
	return (i);
}
char    **ft_split(char *str)
{
	char **tab;
	int i = 0;
	char *line;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	tab = malloc(sizeof(char **) * (stringword(str) + 1);
	while (str[i])
	{
		
		while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			i++;
		}
		line = malloc(sizeof(char) * i);
		ft_memcpy(line, str, i);
		
	}
}
