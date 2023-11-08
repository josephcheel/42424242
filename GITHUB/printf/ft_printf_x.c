/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:16:00 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/06/09 20:54:55 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_x(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_printf_x(nbr / 16);
		len += ft_printf_x(nbr % 16);
	}
	else
		len += write(1, &"0123456789abcdef"[nbr], 1);
	return (len);
}
