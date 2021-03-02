#include <stdio.h>

int main(void)
{
	int i;
	i = 0;
	while(i<10) {
		printf("%d's string pointer value : %p\n",i,"hello world!\n");
		++i;
	}
}
