#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char s1[]="Ho arepa new arepa";
	char s2[]="are";
	char s3[]="";
	char *x;
  	char *r;
  
  	printf("\nPuntero s1: %p\n", s1);
  	printf("\nPuntero s2: %p\n", s2);

	x=ft_strstr(s1, s2);
	printf("\nPuntero: %p\n", x);
 	printf("String: %s \n", x);

  // https://www.tutorialspoint.com/c_standard_library/c_function_strstr.htm

  	r= strstr(s1, s2);
  	printf("\nPuntero: %p\n", r);
  printf("The substring is: %s\n", r);
}
}

