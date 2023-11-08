/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex08.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:01:31 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/16 14:25:45 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char src[] = "hoLa!JaiMe. r8BONDia\n";
	int i;
	
	//ft_strupcase(&src[0]);
	
	i=0;
	while(src[i])
	{
		write(1, &src[i], 1);
		i++;
	}
	printf("%s",ft_strlowcase(&src[0]));
}
