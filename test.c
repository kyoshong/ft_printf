# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h> 
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>



size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	int	c = 2;
	char	s = '1';
	char	*b = "-sdfgdghfjg";
	int		a = 0;
	float f = 10.999;
	unsigned u = 12345;

	 a = 10;
	printf("\n%#p", b);
	return 0;
}
