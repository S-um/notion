
#include <unistd.h>

void ft_print_combn_i(char *num, int n, int digit, char *isFirst)
{
	char digitNum;

	if(digit == n) {
		if(!(*isFirst)) {
			write(1,", ",2);
		}else
			*isFirst = 0;
		write(1,num,n);
		return;
	}

	digitNum = num[digit-1]+1;
	while(digitNum<='9') {
		num[digit] = digitNum;
		ft_print_combn_i(num,n,digit+1,isFirst);
		++digitNum;
	}
}

void ft_print_combn(int n)
{
	char num[9];
	char isFirst;

	num[0] = '0';
	isFirst = 1;
	while(num[0] <= '9') {
		ft_print_combn_i(num,n,1,&isFirst);
		++num[0];
	}
}
