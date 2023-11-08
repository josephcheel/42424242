/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:52:10 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/24 18:42:30 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_printf *printer;
	int len;
	int i;

	i = 0;
	printer = (t_printf *)malloc(sizeof(t_printf));
	va_start(printer->arg, format);
	printer->len = 0;
	while (format[i] != '\0')
	{
		printer = flag_initializer(printer);
		if (format[i] == '%' && format[i + 1])
		{
			printer = ft_printf_format(printer, (char *)format, i+1);
			while (!ft_isidentifier(format[i+1]))
				i++;
			i++;
		}
		else if (format[i] != '%' && format[i])
			printer->len += write(1, &format[i], 1);
		i++;
	}
	va_end(printer->arg);
	len = printer->len;
	free(printer);
	return (len);
}
