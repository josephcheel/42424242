/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephcheel <josephcheel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:23:19 by jcheel-n          #+#    #+#             */
/*   Updated: 2022/05/26 00:37:40 by josephcheel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_intlenght(int c)
{
	size_t	ret;

	ret = 0;
	if (c == 0)
		return (1);
	if (c < 0)
		ret++;
	while (c)
	{
		c = c / 10;
			ret++;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	lenght;
	size_t	i;

	lenght = ft_intlenght(n);
	str = malloc(sizeof(char) * (lenght + 1));
	if (!str || n > 2147483647 || n < -2147483648)
		return (NULL);
	str[lenght] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (lenght-- > i)
	{
		if (n < 0)
			str[lenght] = 48 + (n % 10) * (-1);
		else
			str[lenght] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}	
	else if (src < dst)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	return (6);
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	lensrc;	

	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	else if (lensrc + 1 < dstsize)
		ft_memcpy(dst, src, lensrc + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (lensrc);
}

// static char	*ft_special_itoa(int base)
// {
// 	if (base == 10)
// 		return (ft_strdup("-2147483648"));
// 	return (NULL);
// }

int		ft_intlen_base(int value, int base)
{
	int	len;

	len = 0;
	if (base < 2)
		return (0);
	if (value == 0)
		return (1);
	if (value < 0 && base == 10)
		len++;
	while (value != 0)
	{
		value = value / base;
		len++;
	}
	return (len);
}

char		*ft_itoa_base(int value, int base)
{
	char	*tab;
	char	*str;
	int		length;

	tab = "0123456789ABCDEF";
	//if (value == -2147483648)
		//return (ft_special_itoa(base));
	if (base < 2 || base > 16)
		return (NULL);
	//if (!value)
		//return (ft_strdup("0"));
	length = ft_intlen_base(value, base);
	if (!(str = (char*)malloc(length + 1)))
		return (NULL);
	if (base == 10 && value < 0)
		str[0] = '-';
	if (value < 0)
		value = -value;
	str[length--] = '\0';
	while (value > 0)
	{
		str[length--] = tab[value % base];
		value = value / base;
	}
	return (str);
}
