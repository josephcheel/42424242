#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	if (s1 && s2)
	{
		while (*s1 != '\0')
		{
			s1[i] = s2[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}

