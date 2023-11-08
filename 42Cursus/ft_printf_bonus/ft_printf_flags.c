
#include "ft_printf.h"

t_printf    *flag_initializer(t_printf *content)
{
	content->num = 0;
	content->zero = 0;
	content->minus = 0;
	content->plus = 0;
	content->space = 0;
	content->padding = 0;
	content->prefix = 0;
	content->mfield_width = 0;
	content->dot = 0;
	content->asterisk = 0;
	return (content);
}

int ft_isidentifier(int format)
{
	if (format == 'c' || format == 's' || format == 'p' || format == 'd' || 
			format == 'i' || format == 'u' || format == 'x' || format == 'X' || format == '%')
			return (1);
	return (0);
}

/**/	/*if flag - ignored 0
	if flag . ignored 0
	flag '.' results in undefined behavior with '%c' and '%p'
	flag '0' results in undefined behavior with '%c', '%s' and '%p'
	undefined behavior' means the flags will be ignored, just as the '0' with '-')*/
t_printf *flag_parser(t_printf *printer, char *format, int i)
{   	
	while (!ft_isidentifier(format[i]))
	{
		// if ( format[i] == 'c' &&  format[i] == 'p' && 
		// 	 format[i] == 's')
		// {
		// 	if ( format[i] == 'c' &&  format[i] == 'p')
		// 		printer->dot = -1;
		// 	printer->zero = -1;
		// }

		if (format[i] == '-' ||  format[i] == '.')
		{
			if (format[i] == '-')
				printer->minus = 1;
			else if ( format[i] == '.')
			{
				i++;
				while (ft_isdigit(format[i]))
				{
					printer->dot = (printer->dot * 10) + format[i] - '0';
					i++;
					//printf("%i", printer->dot);
				}
				if (ft_isidentifier(format[i]) && format[i-1] == '.')
					printer->dot = -1;
				if (format[i-1] == '0' && ft_isidentifier(format[i]))
					printer->dot = -1;
				//printf("%d", printer->dot);
			}
			printer->zero = -1;
		}
		else if ( format[i] == '0' && printer->zero != -1)
		{
			//printf("A%dA\n", printer->zero);
			i++;
			while (ft_isdigit(format[i]))
			{
				printer->zero = (printer->zero * 10) +  format[i] - '0';
				i++;
			}
			//printf("A%dA\n", printer->zero);
		}
		else if (ft_isdigit(format[i]) && printer->asterisk == 0)
		{
			while (ft_isdigit(format[i]) && format[i])
			{
				printer->num = (printer->num * 10) +  format[i] - '0';
				i++;
			}
		}
		else if ( format[i] == ' ')
			printer->space = 1;
		else if ( format[i] == '#')
			printer->prefix = 1;
		else if ( format[i] == '+')
			printer->plus = 1;
		else if ( format[i] == '*')
		{
			if (format[i-1] == '0' )
				printer->zero = va_arg(printer->arg, int);
			else if (format[i-1] == '.' )
				printer->dot = va_arg(printer->arg, int);
			else
				printer->num = va_arg(printer->arg, int);
		}
		if (ft_isidentifier(format[i]))
		 	break ;
		if (!ft_isdigit(format[i-1]))
			i++;
	}
	return (printer);
}
