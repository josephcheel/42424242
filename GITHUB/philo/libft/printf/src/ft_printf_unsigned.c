/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-nbr <jcheel-nbr@student.42barcelona.+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:51:20 by jcheel-nbr        #+#    #+#             */
/*   Updated: 2022/06/09 21:00:01 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_printf_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr <= UINT_MAX)
	{
		if (nbr >= 10)
		{
			len += ft_printf_unsigned(nbr / 10);
			len += ft_printf_unsigned(nbr % 10);
		}
		else
			len += ft_printf_char(nbr + '0');
		return (len);
	}
	return (0);
}
