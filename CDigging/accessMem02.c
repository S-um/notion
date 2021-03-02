
#include <unistd.h>

int main(void)
{
	int a;
	char *cptr = (char*)&a;
	cptr[0] = '1';
	cptr[1] = '2';
	cptr[2] = '3';
	cptr[3] = '4';

	write(1,&a,4);

	return 0;
}
