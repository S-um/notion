
#include <stdio.h>

int main(void)
{
	int a = 3;
	const int *ptr1 = &a;
	int *ptr2 = &a;
	
	a = 4;
	printf("%d\n",a);

	//*ptr1 = 5;
	printf("%d\n",a);

	*ptr2 = 6;
	printf("%d\n",a);

	return 0;
}
