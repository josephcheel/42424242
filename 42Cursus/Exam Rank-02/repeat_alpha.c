/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:15:34 by jcheel-n          #+#    #+#             */
/*   Updated: 2021/11/18 22:50:41 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char repeat(int counter, char i)
{
	while (counter != 0)
	{
		write(1, &i, 1);
			counter--;
	}
}

int	main(int argc, char **argv)
{
	int i;
	int counter;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[i] != '\0') 
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')	
			{
				counter = argv[1][i] - 64; 
				repeat(counter, i);
			}
			else if(argv[1][i] >= 'A' && argv[1][i]<= 'Z')
			{
				counter = argv[1][i] - 96;
				repeat(counter, i);
			}	
			i++;
		}
		argv[i] = '\0';
	}
}
