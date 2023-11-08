/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex07.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:01:31 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/17 17:41:26 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char src[] = "hola!Jaime. r8";
	int i;
	
	//ft_strupcase(&src[0]);
	
	i=0;
	while(src[i])
	{
		write(1, &src[i], 1);
		i++;
	}
	printf("\n%s",ft_strupcase(&src[0]));
}
