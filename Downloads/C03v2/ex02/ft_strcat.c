/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adittmer <adittmer@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:01:57 by adittmer          #+#    #+#             */
/*   Updated: 2021/11/16 18:02:00 by adittmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	j;

	counter = 0;
	j = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[j] != '\0')
	{
		dest[counter + j] = src[j];
		j++;
	}
	dest[counter + j] = '\0';
	return (dest);
}
