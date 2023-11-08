/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:01:31 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/10 10:59:21 by mibanez-         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char src[] = "hoLa jaiMe r+e-z";
	int i;
	
	//ft_strcapitalize(&src[0]);
	
	i=0;
	while(src[i])
	{
		write(1, &src[i], 1);
		i++;
	}
	write(1, "\n", 1);
	printf("%s",ft_strcapitalize(&src[0]));
}
