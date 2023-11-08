/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:01:31 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/08 10:29:56 by mibanez-         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "hola";
	char dest[5];
	int i;

	ft_strcpy(&dest[0], &src[0]);
	
	i=0;
	while(src[i])
	{
		write(1, &src[i], 1);
		i++;
	}
	i=0;
	write(1, "\n", 1);
	while(dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
	
}
