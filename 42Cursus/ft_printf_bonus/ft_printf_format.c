/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:13:08 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/26 00:42:50 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*ft_printf_format(t_printf *printer, char *format, int i)
{
	printer = flag_parser(printer, format, i);
	// printf("\n%d\n", printer->num);
	// printf("%d\n", printer->len);
	// printf("%d\n", printer->zero);
	// printf("%d\n", printer->minus);
	// printf("%d\n", printer->plus);
	// printf("%d\n", printer->space);

	// printf("%d\n", printer->padding);
	// printf("%d\n", printer->prefix);
	// printf("%d\n", printer->mfield_width);
	// printf("%d\n", printer->dot);
	// printf("%d\n", printer->asterisk);
	// printf("SIGUINETE");
	while (!ft_isidentifier(format[i]))
		i++;
	if (format[i] == 'c')
		printer = ft_printf_char(va_arg(printer->arg, int), printer);
	else if (format[i] == 's')
		printer = ft_printf_str(va_arg(printer->arg, char *), printer);
	// else if ( format == 'p')
	// 	printer = ft_printf_ptr(va_arg(arg, void *), printer);
	else if ( format[i] == 'd' ||  format[i] == 'i')
		printer= ft_printf_nbr(va_arg(printer->arg, int), printer);
	//else if ( format == 'u')
	// 	printer = ft_printf_unsigned(va_arg(arg, unsigned int), printer);
	else if (format[i] == 'x')
		printer = ft_printf_x(va_arg(printer->arg, unsigned int), printer);
	// else if ( format == 'X')
	// 	printer = ft_printf_x_uppercase(va_arg(arg, unsigned int), printer);
	else if ( format[i] == '%')
		printer = ft_printf_char('%', printer);
	//else
		//(printer->len = -1;
	i++;
	return (printer);
}
