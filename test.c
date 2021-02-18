#include "ft_printf.h"

void	*ft_memset(void *ptr, int val, unsigned int s)
{
	while (s != 0)
	{
		*((char *)ptr + s - 1) = val;
		s--;
	}
	return (ptr);
}


int main()
{
	int	c = 2;
	char	*s = "1";
	char	*b = "123";
	int		a = 11;
	float f = 10.999;
	unsigned u = 12345;
	int d = 1;

	//char *set_str;

	//set_str = s;
	// printf("%*p\n", a, d);
	// printf("%-p\n", d);
	//printf("%0p\n", d);
	//int  p = printf("%10.10s\n", s);
	//printf("%10.10d",p);
	//printf("%#p\n", d);
	//printf("% p\n", d);
	//printf("%+p\n", d);
	//printf("%.1p\n", d);
	//printf("%n\n", d);
	//int s = d - c;
	printf("%10d\n", d);
	//ft_memset(set_str, 32, 9);
	//printf("%s\n", set_str);
	// s = b;
	// printf("%s\n", s);
	return 0;
}
