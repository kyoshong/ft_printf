#include "ft_printf.h"

int main()
{
	wchar_t *w = _T("뭐라는경뷁");
	
	printf("%ls", w);
	
	return 0;
}
