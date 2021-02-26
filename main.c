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
	int aaa = 1010101;
	int *ptr = &aaa;
	char  *s = "123";
	//int a = 0;
	//int *bbb = &aa;

	//char *a = ft_strjoin("vv","");
	//printf("%s",a);
	//printf("%.0p\n", "aaa");
	// ft_printf("%.0p\n", "aaa");
	printf("%p\n", s);
	ft_printf("%p\n", s);

	*ptr = 1;
	//printf("%#o\n", aaa);
	aaa = 10;
	// ft_printf("%d\n", aaa);
	// ft_printf("1234%n\n", ptr);
	// ft_printf("%d\n", aaa);


 	//ft_printf("%9p", i);

	//printf("\n%p", a);
	return 0;
}
