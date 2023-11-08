/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:51:20 by jcheel-nbr        #+#    #+#             */
/*   Updated: 2022/05/22 00:41:33 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_printf_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr <= UINT_MAX)
	{
		if (nbr == 0)
		{
			len = write(1, &"0", 1);
			return (len);
		}
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
