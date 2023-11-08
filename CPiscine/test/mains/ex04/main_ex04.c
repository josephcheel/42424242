/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibanez- <mibanez-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:05:28 by mibanez-          #+#    #+#             */
/*   Updated: 2021/11/15 12:07:36 by mibanez-         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main (void)
{
	char *src;
	char tofind[] = "fad";
	src = "abcasdfadfa";

	printf("%s\n",ft_strstr(src, tofind));
	//printf("%s\n",strstr(src, tofind));
}
