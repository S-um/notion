
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("%d\n",argc);
	if(argc == 3)
		return 0;
	main(argc+1,argv);

	return 0;
}
