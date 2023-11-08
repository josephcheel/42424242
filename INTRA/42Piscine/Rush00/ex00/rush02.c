/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmesoner <pmesoner@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:10:30 by pmesoner          #+#    #+#             */
/*   Updated: 2021/10/31 20:21:55 by pmesoner         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 1 || y < 1)
		return ;
	b = 0;
	while (++b <= y)
	{
		a = 0;
		while (++a <= x)
		{
			if ((b == 1 && a == 1) || (b == 1 && a == x))
				ft_putchar('A');
			else if ((b == y && a == x) || (b == y && a == 1))
				ft_putchar('C');
			else if (b == 1 || b == y || a == 1 || a == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}	
		ft_putchar('\n');
	}
}
