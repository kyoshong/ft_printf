#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int b = 4;
	int c = 0;
	char *i = "(null)";
	//ft_printf("%0.d\n", b);
	printf("%1.1s\n", i);
	printf("%-4.2s\n", i);
	printf("%4.0s\n", i);
	printf("%1.0s\n", i);
	printf("%s\n", i);
	int a = printf(NULL);

	printf("\n%d", a);
	return 0;
}
