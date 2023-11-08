#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main () {
   char src[50], src2[50], src3[50], src4[50], src5[50], src6[50], 
   dest[50], dest2[50], dest3[50], dest4[50], dest5[50], dest6[50];

   
	strcpy(src, " world");
	strcpy(dest, "Hello");
	strcpy(src2, " world");
	strcpy(dest2,"Hello");

   	int x = ft_strlcat(dest, src, 12);
   	printf("Own: Final destination string, size 12 : |%s|\n", dest);
    printf ("Size = %d\n", x);

    x = strlcat(dest2, src2, 12);
  	printf("Library: Final destination string, size 12 : |%s|\n", dest2);
    printf ("Size = %d\n", x);

    strcpy(src3, " world");
	strcpy(dest3, "Hello");
	strcpy(src4, " world");
	strcpy(dest4,"Hello");

   	x = ft_strlcat(dest3, src3, 8);
   	printf("Own: Final destination string, size 8 : |%s|\n", dest3);
    printf ("Size = %d\n", x);

    x = strlcat(dest4, src4, 8);
  	printf("Library: Final destination string, size 8 : |%s|\n", dest4);
    printf ("Size = %d\n", x);

    strcpy(src5, " world");
	strcpy(dest5, "Hello");
	strcpy(src6, " world");
	strcpy(dest6,"Hello");

   	x = ft_strlcat(dest5, src5, 2);
   	printf("Own: Final destination string, size 8 : |%s|\n", dest5);
    printf ("Size = %d\n", x);

    x = strlcat(dest6, src6, 2);
  	printf("Library: Final destination string, size 8 : |%s|\n", dest6);
    printf ("Size = %d\n", x);
   return(0);
}