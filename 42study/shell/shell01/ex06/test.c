
#include <stdio.h>

int main(void)
{
	float a = 0;
	a += 0.1;
	a -= 0.1;
	if(a)
		printf("a is not zero\n");
	else
		printf("a is zero\n");
}
