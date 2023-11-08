/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:01:31 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/18 16:47:15 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "hola";
	char dest[10];
	int i;
	unsigned int n;
	
	n = 5;
	ft_strncpy(&dest[0], &src[0], n);
	
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
}
