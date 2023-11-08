/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:15:21 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/26 00:40:04 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*ft_printf_str(char *str, t_printf *printer)
{
	if (printer->dot == 0 || (printer->dot >= (int)ft_strlen(str)))
	{	
		if (str == NULL)
				printer->dot = 6 ;
		else
			printer->dot = ft_strlen(str);
	}
	if (printer->dot == -1 )
		printer->dot = 0;
	if (printer->asterisk < 0)
		printer->num = printer->asterisk;
	if (printer->minus == 1)
	{
		if (str == NULL)
		{
			printer->len += write(1, "(null)", printer->dot);
		}
		else
			if (ft_strlen(str) != 0)
				printer->len += write(1, &(*str), printer->dot);
	}
	if (printer->num > printer->dot)
		while(printer->num-- > printer->dot)
			printer->len += write(1, " ", 1);
	
	if (printer->minus == 0)
	{
		if (str == NULL)
			printer->len += write(1, "(null)", printer->dot);
		else
			if (ft_strlen(str) != 0)
				printer->len += write(1, &(*str), printer->dot);
	}
	return (printer);
}