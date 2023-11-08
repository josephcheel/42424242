/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:15:29 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/04/20 17:59:53 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_printf_nbr(int number)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa(number);
	len += ft_printf_str(str);
	free(str);
	return (len);
}
