/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:04:49 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/24 22:26:48 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_printf
{
	va_list arg;
	int num;
	int len;
	int zero;
	int minus;
	int plus;
	int space;
	int padding;
	int prefix;
	int mfield_width;
	int dot;
	int asterisk;
	int index;
	
}t_printf;



int			ft_printf(const char *format, ...);

t_printf	*ft_printf_format(t_printf *printer, char *format, int i);

t_printf	*ft_printf_char(char c, t_printf *printer);
t_printf	*ft_printf_str(char *str, t_printf *printer);
t_printf	*ft_printf_nbr(int number, t_printf *printer);

t_printf	*ft_printf_unsigned(unsigned int nbr, t_printf *printer);
t_printf	*ft_printf_ptr(void *ptr, t_printf printer);

t_printf	*ft_printf_x(unsigned long nbr, t_printf *printer);
t_printf	*ft_printf_x_uppercase(unsigned long nbr, t_printf printer);

char		*ft_itoa(int n);
void		*ft_memcpy(void *dst, const void *src, size_t n);

t_printf   	*flag_initializer(t_printf *content);
t_printf 	*flag_parser(t_printf *printer, char *format, int i);
int			ft_isdigit(int c);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlen(const char *str);
int			ft_isidentifier(int format);
int			ft_intlen_base(int value, int base);
char		*ft_itoa_base(int value, int base);


#endif
