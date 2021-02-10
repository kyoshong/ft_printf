#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i =10;
	int *k = &i;

	printf("k : %p\n", k);
	return 0;
}
