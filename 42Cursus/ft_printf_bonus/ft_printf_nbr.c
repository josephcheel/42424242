/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:15:29 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/26 01:36:59 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*ft_printf_nbr(int nbr, t_printf *printer)
{
	char	*str;
	
	printer->zero--;
	// if (nbr < 0)
	// 	str = ft_itoa(nbr *(-1));
	// else
	str = ft_itoa(nbr);
	// if (nbr < 0)
	// 	printer->len = write(1, "-", 1);
	if (printer->dot == 0 || (printer->dot >= (int)ft_intlen_base(nbr, 10)))
	{	
		// if (str == NULL)
		// 		printer->dot = 6 ;
		if (nbr < 0)
			printer->dot = ft_strlen(str) + 1;
		else if (nbr >= 0)
			printer->dot = ft_strlen(str);
	}
	if (printer->dot == -1 )
		printer->dot = 0;
	if (printer->asterisk < 0)
		printer->num = printer->asterisk;
	if (printer->minus == 1)
	{
		// if (str == NULL)
		// {
		// 	printer->len += write(1, "(null)", printer->dot);
		// }
	
			if (printer->space == 1 && nbr >= 0)
				printer->len += write(1, " ", 1);
			if (printer->space == 1 && nbr > 0)
				printer->len += write(1, "+", 1);
			if (ft_strlen(str) != 0)
				printer->len += write(1, &(*str), printer->dot);
	}
	if (printer->num > 0 && printer->dot > 0)
	if (printer->num > printer->dot)
		while(printer->num-- > printer->dot)
			printer->len += write(1, "0", 1);
	if (printer->zero > printer->dot)
		while(printer->zero-- > printer->dot)
			printer->len += write(1, "0", 1);
	
	if (printer->minus == 0)
	{
		// if (str == NULL)
		// 	printer->len += write(1, "(null)", printer->dot);
		printf("HOLA");
		if (printer->space == 1 && nbr > 0)
				printer->len += write(1, "0", 1);
			if (ft_strlen(str) != 0)
				printer->len += write(1, &(*str), printer->dot);
	}
	//printf("\n%s", str);
	// printer = ft_printf_str(str, printer);
	free(str);
	return (printer);
}
