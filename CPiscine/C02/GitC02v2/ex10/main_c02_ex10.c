/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex10.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:01:31 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/18 14:34:25 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char src[] = "hola Miguel";
	char dest[30];
	int i;
	unsigned int size;
	
	size = 7;

	i=0;
	while(src[i])
	{
		write(1, &src[i], 1);
		i++;
	}
	printf("\n");	
	unsigned int x = ft_strlcpy(&dest[0], &src[0], size);
	
	printf("%d\n", x);
	i=0;
	while(dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
}
