/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:04:49 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/04/21 12:48:31 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *format, ...);

int		ft_printf_format(char format, va_list arg);

int		ft_printf_char(char c);
int		ft_printf_str(char *str);
int		ft_printf_nbr(int number);

int		ft_printf_unsigned(unsigned int nbr);
int		ft_printf_ptr(void *ptr);

int		ft_printf_x(unsigned long nbr);
int		ft_printf_x_uppercase(unsigned long nbr);

char	*ft_itoa(int n);

#endif
