/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:52:10 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/04/21 12:34:33 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i])
		{
			len += ft_printf_format(format[i + 1], arg);
			if (len < 0)
				return (len);
			i++;
		}
		else if (format[i] != '%' && format[i])
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
