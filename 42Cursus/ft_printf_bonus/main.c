

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	// printf("%3c\n",'A');
	// printf("%10.2s", "");
	//printf(" NULL %s NULL ", NULL);
	// printf("%d", printf("%10.2s", "HOLA"));
	// printf("%d", printf("%10s", "HOLA"));
//printf("\nTU PRINTF\n");
// printf(" %1s", "");
// printf("\n");
// printf("%-1s", "");
// printf("\n");
// printf(" %-2s", "");
// printf("\n");
// printf("%-3s ", "");
// printf("\n");
// printf("\nB %-3s %-4s ", " - ", "");
// printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", "");
// printf("\n");
//printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 ");
//ft_printf("%3s", NULL);
//ft_printf("MI PRINTF");
//ft_printf("\n");
// ft_printf(" %1s", "");
// ft_printf("\n");
// ft_printf("%-1s", "");
// ft_printf("\n");
// ft_printf(" %-2s", "");
// ft_printf("\n");
// ft_printf("%-3s ", "");
// ft_printf("\n");
// ft_printf("A %-3s %-4s ", " - ", "");

//ft_printf(" %.s ", "-");
//printf(" %.1s %.2s %.3s %.4s ", " - ", "", "4", "");
//printf(" %.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 ");

//ft_printf("%.s", "");
//ft_printf(" %s ", "");
//ft_printf(" %.s ", "-");
// printf(" %.1s %.2s %.3s %.4s ", " - ", "", "4", "");
// ft_printf(" %.1s %.2s %.3s %.4s ", " - ", "", "4", "");
// printf("%d", ft_printf(" %.1s %.2s %.3s %.4s ", " - ", "", "4", ""));
//ft_printf(" %.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 ");
//printf("\n");
//ft_printf("%.1s","2 ");
//printf("%10.3s", NULL);
//ft_printf("%d", 30);
//ft_printf("%.2s", "");
//ft_printf("%.1s", " - ");

// 29: 	TEST(5, print(" %.s ", "-"));
// 32: 	TEST(8, print(" %.1s %.2s %.3s %.4s ", " - ", "", "4", ""));
// 33: 	TEST(9, print(" %.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 "));

//printf("FT_PRI%d", ft_printf(" %-3s %-4s ", " - ", ""));
//printf("PRIN%d", printf(" %-3s %-4s ", " - ", ""));
// ft_printf("\n");
// ft_printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", "");
// ft_printf("\n");
// ft_printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 ");
	//ft_printf("%x\n", 99999);
	//ft_printf("%x", 99999);
//ft_printf("%010d", -101);
//printf("%010d", -101);
//printf(" %.12d %.9d %.13d %.14d", INT_MAX, INT_MIN, 0, -42);
//ft_printf(" %.8d %.9d %.13d %.14d", INT_MAX, INT_MIN, 0, -42);
ft_printf(" %d ", -1);
ft_printf("\n");
printf(" %d ", -1);

//printf("%d\n%d\n",ft_printf("%010d\n", -101), printf("%010d\n", -101));
	return (0);
	
}


// #include <stdarg.h>
// #include <stdio.h>
// #include <string.h>

// // int	ft_printf(const char *format, ...)
// // {
// // 	va_list args;
// // 	int done;
	
// // 	char *substr = strstr(format, "42");
// // 	if (substr != format)
// // 		return (0);
// // 	va_start(args, format);
// // 	done = vfprintf(stdout, format, args);
// // 	va_end(args);
// // 	return (done);
// // }

// void	red(void)
// {
// 	printf("\033[1;31m");
// }

// void	yellow(void)
// {
// 	printf("\e[0;93m");
// }

// void	cyan(void)
// {
// 	printf("\e[0;36m");
// }

// void	purple(void)
// {
// 	printf("\e[0;35m");
// }
	
// void	blue(void)
// {
// 	printf("\e[0;34m");
// }

// void	green(void)
// {
// 	printf("\e[0;32m");
// }
// void	reset(void)
// {
// 	printf("\033[0m");
// }

// int	main(void)
// {
// 	printf("\n");
// 	yellow();
// 	printf("----------------------------------------------------------------------------------------------------\n");
// 	printf("-------------------------------------------PRNTF FLAG TEST------------------------------------------\n");
// 	printf("----------------------------------------------------------------------------------------------------\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("---------------------------------------------character----------------------------------------------\n");
// 	reset();
// 	printf("\n");
// 	printf("%-60s: |%c|","format identifier", 'x');
// 	printf("\n");
// 	printf("%-60s: |%2c|", "with minimum field (2) width", 'x');
// 	printf("\n");
// 	printf("%-60s: |%-20c|", "minimum field (20) left align", 'x');
// 	printf("\n");
// 	printf("%-60s: |%-*c|", "minimum (8) field (*) left align", 8, 'x');
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("----------------------------------------------string--------------------------------------------------\n");
// 	reset();
// 	printf("\n");
// 	printf("%-60s: |%s|","format identifier", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%20s|", "with minimum field (20) width", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%.8s|", "precision (8) field", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%-.8s|", "precision (8) field left align", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%20.8s|", "minimum (20) and precision (8) field", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%-20.8s|", "minimum (20) and precision (8) field left align", "quarenta e dois");
// 	printf("\n");
// 	printf("%-60s: |%-*.*s|", "minimum (20) and precision (8) field left align", 20, 8, "quarenta e dois");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("---------------------------------------------pointer----------------------------------------------------\n");
// 	reset();
// 	printf("\n");
	
// 	int *pointer;
// 	int num;
	
// 	num = 42;
// 	pointer = &num;
// 	printf("%-60s: |%p|","format identifier", pointer);
// 	printf("\n");
// 	printf("%-60s: |%20p|", "with minimum field (20) width", pointer);
// 	printf("\n");
// 	printf("%-60s: |%-20p|", "minimum field (20) left align", pointer);
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("----------------------------------------decimal_signed_integer---------------------------------------------\n");
// 	reset();
// 	printf("\n");
// 	int hex_neg = -0x2a;
	
// 	printf("%-60s: |%d|","format identifier", -42);
// 	printf("\n");
// 	printf("%-60s: |%d|","(hex) format identifier", hex_neg);
// 	printf("\n");
// 	printf("%-60s: |%-3d|", "with minimum field (3) width", -42);
// 	printf("\n");
// 	printf("%-60s: |%5d|", "with minimum field (5) width", -42);
// 	printf("\n");
// 	printf("%-60s: |%05d|", "with minimum field (5) width and 0 padding", -42);
// 	printf("\n");
// 	printf("%-60s: |%5.3d|", "minimum field (5) width with 0's", -42);
// 	printf("\n");
// 	printf("%-60s: |%-5d|", "minimum field (5) left align", -42);
// 	printf("\n");
// 	printf("%-60s: |%5.1d|", "precision (1) and minimum (5) field", -42);
// 	printf("\n");
// 	printf("%-60s: |%.3d|", "precision (3) field", hex_neg);
// 	printf("\n");
// 	printf("%-60s: |%-.5d|", "precision (5) field left align", hex_neg);
// 	printf("\n");
// 	printf("%-60s: |%10.5d|", "minimum (10) and precision (5) field", -42);
// 	printf("\n");
// 	printf("%-60s: |%-10.5d|", "minimum (10) and precision (5) field left align", -42);
// 	printf("\n");
// 	printf("%-60s: |%-*.*d|", "minimum (20) and precision (1) field left align", 20, 1, hex_neg);
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("-----------------------------------------------integer--------------------------------------------------------\n");
// 	reset();
// 	printf("\n");
// 	printf("%-60s: |%i|","format identifier", -42);
// 	printf("\n");
// 	printf("%-60s: |%20i|", "with minimum field (20) width", -42);
// 	printf("\n");
// 	printf("%-60s: |%020i|", "minimum field (20) width with 0's", -42);
// 	printf("\n");
// 	printf("%-60s: |%-20i|", "minimum field (20) left align", -42);
// 	printf("\n");
// 	printf("%-60s: |%20.1i|", "precision (1) and minimum (20) field", -42);
// 	printf("\n");
// 	printf("%-60s: |%.1i|", "precision (1) field", -42);
// 	printf("\n");
// 	printf("%-60s: |%-.1i|", "(hex_neg) precision (1) field left align", hex_neg);
// 	printf("\n");
// 	printf("%-60s: |%020.10i|", "minimum (20) and precision (10) field", -12345678);
// 	printf("\n");
// 	printf("%-60s: |%-20.10i|", "minimum (20) and precision (10) field left align", -12345678);
// 	printf("\n");
// 	printf("\n");
// 	printf("%-60s: |%-*.*i|", "(hex_neg) minimum (20) and precision (1) field left align", 20, 1, hex_neg);
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("-------------------------------------------unsigned_integer------------------------------------------------------\n");
// 	reset();
// 	printf("\n");
// 	red();
// 	printf("%-60s: |%u|","negative input", -42);
// 	reset();
// 	printf("\n");
// 	printf("%-60s: |%u|","format identifier", 42);
// 	printf("\n");
// 	printf("%-60s: |%20u|", "with minimum field (20) width", 42);
// 	printf("\n");
// 	printf("%-60s: |%020u|", "minimum field (20) width with 0's", 42);
// 	printf("\n");
// 	printf("%-60s: |%-20u|", "minimum field (20) left align", 42);
// 	printf("\n");
// 	printf("%-60s: |%20.1u|", "precision (1) and minimum (20) field", 42);
// 	printf("\n");
// 	printf("%-60s: |%.1u|", "precision (1) field", 42);
// 	printf("\n");
// 	printf("%-60s: |%-.1u|", "(hex_neg) precision (1) field left align", 42);
// 	printf("\n");
// 	printf("%-60s: |%-20.1u|", "minimum (20) and precision (1) field left align", 42);
// 	printf("\n");
// 	printf("%-60s: |%-*.*u|", "(hex_neg) minimum (20) and precision (1) field left align", 20, 1, 42);
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("---------------------------------------------hex_integer_lowercase----------------------------------------------------\n");
// 	reset();
	
// 	int hex = 0x9f4;
// 	int integer = 42;
	
// 	printf("\n");
// 	printf("%-60s: |%x|","(int) format identifier", integer);
// 	printf("\n");
// 	printf("%-60s: |%x|","(hex) format identifier", hex);
// 	printf("\n");
// 	printf("%-60s: |%20x|", "(int) with minimum field (20) width", integer);
// 	printf("\n");
// 	printf("%-60s: |%20x|", "(hex) with minimum field (20) width", hex);
// 	printf("\n");
// 	printf("%-60s: |%020x|", "(int) minimum field (20) width with 0's", integer);
// 	printf("\n");
// 	printf("%-60s: |%020x|", "(hex) minimum field (20) width with 0's", hex);
// 	printf("\n");
// 	printf("%-60s: |%-20x|", "(int) minimum field (20) left align", integer);
// 	printf("\n");
// 	printf("%-60s: |%-20x|", "(hex) minimum field (20) left align", hex);
// 	printf("\n");
// 	printf("%-60s: |%20.6x|", "precision (6) and minimum (20) field", hex);
// 	printf("\n");
// 	printf("%-60s: |%.6x|", "precision (6) field", integer);
// 	printf("\n");
// 	printf("%-60s: |%-.6x|", "(hex_neg) precision (6) field left align", hex);
// 	printf("\n");
// 	printf("%-60s: |%-20.6x|", "minimum (20) and precision (6) field left align", hex);
// 	printf("\n");
// 	printf("%-60s: |%-*.*x|", "(hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("---------------------------------------------hex_integer_uppercase----------------------------------------------------\n");
// 	reset();
// 	printf("\n");
// 	printf("%-60s: |%X|","(int) format identifier", integer);
// 	printf("\n");
// 	printf("%-60s: |%X|","(hex) format identifier", hex);
// 	printf("\n");
// 	printf("%-60s: |%20X|", "(int) with minimum field (20) width", integer);
// 	printf("\n");
// 	printf("%-60s: |%20X|", "(hex) with minimum field (20) width", hex);
// 	printf("\n");
// 	printf("%-60s: |%020X|", "(int) minimum field (20) width with 0's", integer);
// 	printf("\n");
// 	printf("%-60s: |%020X|", "(hex) minimum field (20) width with 0's", hex);
// 	printf("\n");
// 	printf("%-60s: |%-20X|", "(int) minimum field (20) left align", integer);
// 	printf("\n");
// 	printf("%-60s: |%-20X|", "(hex) minimum field (20) left align", hex);
// 	printf("\n");
// 	printf("%-60s: |%20.6X|", "precision (6) and minimum (20) field", hex);
// 	printf("\n");
// 	printf("%-60s: |%.6X|", "precision (6) field", integer);
// 	printf("\n");
// 	printf("%-60s: |%-.6X|", "(hex_neg) precision (6) field left align", hex);
// 	printf("\n");
// 	printf("%-60s: |%-20.6X|", "minimum (20) and precision (6) field left align", hex);
// 	printf("\n");
// 	printf("%-60s: |%-*.*X|", "(hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	yellow();
// 	printf("--------------------------------------------------------%%---------------------------------------------------------------\n");
// 	reset();
// 	printf("|%%|");
// 	printf("\n");
// 	printf("|%5%|");
// 	printf("\n");
// 	printf("|%0.5%|");
// 	printf("\n");
// 	printf("|%-10.4%|");
// 	printf("\n");
// 	printf("\n");
// 	printf("\n");
// 	return (0);
// }
