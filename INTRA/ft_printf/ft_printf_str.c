/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:15:21 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/04/20 18:03:50 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	len;

	len = -1;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[++len])
		write(1, &str[len], 1);
	return (len);
}
