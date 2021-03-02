
#include <stdio.h>

int main(void)
{
	char c1 = 127, c2 =  38;
	int cSumResult = c1 + c2;
	printf("c1 : %hhd, c2 : %hhd, cSumResult : %d\n",c1,c2,cSumResult);

	int i1 = 2147483647, i2 = 3;
	long long iSumResult = i1 + i2;
	printf("i1 : %d, i2 : %d, iSumResult: %lld\n",i1,i2,iSumResult);

	return 0;
}
