# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h> 
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*ft_print_base_upper(unsigned int n, char *stack, int len)
{
	char	*base;

	base = "0123456789ABCDEFG";
	if (n > 16)
	{
		len--;
		stack = ft_print_base_upper(n / 16, stack, len);
	}
	len++;
	stack[len] =  base[n % 16];
	return (stack);
}
int		ft_count_base(unsigned int n, int i)
{
	if (n > 16)
		i = ft_count_base(n / 16, i);
	i++;
	return (i);
}

int		ft_get_base_count(unsigned int n)
{
	int	i;
	i = 0;
	i = ft_count_base(n, i);
	return (i);
}
void	ft_putbase_upper(unsigned int n)
{
	char	*stack;
	int		len;

	len = ft_get_base_count(n);
	if (!(stack = malloc(sizeof(char) * (len + 1))))
		return ;
	stack = ft_print_base_upper(n, stack, len);
	printf("%s", stack);
	free(stack);
}
int main()
{
	int	c = 2;
	char	*s = "1";
	char	*b = "123";
	int		a = 11;
	float f = 10.999;
	unsigned u = 12345;

	ft_putbase_upper(32);
	//printf("%s", tem);
	//char *set_str;
	
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
	//printf("%10d\n", d);
	//ft_memset(set_str, 32, 9);
	//printf("%s\n", set_str);
	// s = b;
	// printf("%s\n", s);
	return 0;
}
