/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_uppercase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:16:09 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/22 00:41:30 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_printf_x_uppercase(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_printf_x_uppercase(nbr / 16);
		len += ft_printf_x_uppercase(nbr % 16);
	}
	else
		len += write(1, &"0123456789ABCDEF"[nbr % 16], 1);
	return (len);
}
