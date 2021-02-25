#include "ft_printf.h"

int main()
{
	int b = 4;
	char *c = "world";
	char *i = "hello";
	//ft_printf("%0.d\n", b);
	// printf("%1.1s\n", i);
	// printf("%-4.2s\n", i);
	// printf("%4.0s\n", i);
	// printf("%1.0s\n", i);
	//printf("%s\n", i);
	//int a = printf("%2$s, %1$s\n", i, c);
	int aaa = 10;
	int *ptr = &aaa;
	int **p = &ptr;
	int aa = 1;
	int *bbb = &aa;
	
	
	printf("%d\n", aaa);
	p = &bbb;
	printf("%d\n", aaa);
	aaa = 10;
	// ft_printf("%d\n", aaa);
	// ft_printf("1234%n\n", ptr);
	// ft_printf("%d\n", aaa);
	
	
 	//ft_printf("%9p", i);

	//printf("\n%p", a);
	return 0;
}
