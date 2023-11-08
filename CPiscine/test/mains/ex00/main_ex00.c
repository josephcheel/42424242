/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:25:01 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/14 09:25:15 by mibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main (void)
{
	char *src;
	char *src2;

	src = "Hola";
	src2 = "Hola";

	printf("%d\n", ft_strcmp(src, src2));
}
