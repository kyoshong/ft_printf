#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int b = 0;
	char *i = "1";
	//ft_printf("%0.d", b);
	printf("%.d", b);
	printf("%1.s", i);
	return 0;
}
