/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:53:27 by jcheel-n          #+#    #+#             */
/*   Updated: 2021/11/08 15:54:04 by jcheel-n         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_putnbr(int nb);
int main(void)
{
	ft_putnbr(0xA);
	printf("\n");
	ft_putnbr(0120);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(-32768);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147);
	printf("\n");
	ft_putnbr(-21474);
	printf("\n");
	ft_putnbr(-214748);
	printf("\n");
	ft_putnbr(-2147483);
	printf("\n");
	ft_putnbr(-21474836);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
}
