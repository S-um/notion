
#include <stdio.h>

int main(void)
{
	int a;
	a = 0;

	++a;

	printf("%d\n",a);

	int *p;
	p = &a;
	++(*p);

	printf("%d\n",a);

	int **pp;
	pp = (int**)&a;
	++(*pp);

	printf("%d\n",a);

	return 0;
}
