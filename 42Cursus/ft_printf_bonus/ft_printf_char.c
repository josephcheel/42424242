/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:14:13 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/24 18:39:38 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*ft_printf_char(char c, t_printf *printer)
{
	if (printer->asterisk != 0)
		printer->num = printer->asterisk;
	printer->num -= 1;
	if (printer->minus == 1)
		printer->len += write(1, &c, 1);
	if (printer->num > 0)
		while(printer->num-- > 0)
			printer->len += write(1, " ", 1);
	if (printer->minus == 0)
		printer->len += write(1, &c, 1);
	return (printer);
}
