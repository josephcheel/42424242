/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:15:38 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/24 19:46:04 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr)
{
	unsigned long	swap;
	int				len;

	len = 0;
	if (ptr != NULL)
	{
		swap = (unsigned long long )ptr;
		len += write(1, "0x", 2);
		len += ft_printf_x(swap);
		return (len);
	}
	len += write(1, "0x0", 3);
	return (len);
}
