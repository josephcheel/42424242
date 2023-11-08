/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adittmer <adittmer@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:01:57 by adittmer          #+#    #+#             */
/*   Updated: 2021/11/16 18:02:00 by adittmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned)s1[i] - (unsigned)s2[i]);
		}
		i++;
	}
	if (i != n)
	{
		return ((unsigned)s1[i] - (unsigned)s2[i]);
	}
	else
	{
		return (0);
	}
}
