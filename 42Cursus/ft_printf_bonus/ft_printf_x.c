/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:16:00 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/24 23:03:52 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*ft_printf_x(unsigned long nbr, t_printf *printer)
{
	char *hex;


	printf("%d\n", printer->minus);
	printf("%d\n", printer->dot);
	hex = ft_itoa_base(nbr, 16);

	if (printer->dot == 0)
	{
		printer->dot = ft_strlen(hex);
		if (hex == NULL)
			printer->dot = 1;
	}
	if (printer->asterisk != 0)
		printer->num = printer->asterisk;
	printer->num -= 1;
	if (printer->minus == 1)
	{
		if (hex == NULL)
			printer->len += write(1, "0", printer->dot);
		else
			printer->len += write(1, &(*hex), printer->dot);
	}
	if (printer->num > 0)
		while(printer->num-- > 0)
			printer->len += write(1, " ", 1);
	if (printer->minus == 0)
	{
		if (hex == NULL)
			printer->len += write(1, "0", printer->dot);
		else
			printer->len += write(1, &(*hex), printer->dot);
	}
	// printer = ft_printf_hex(hex, printer);
	free(hex);
	return (printer);
}
