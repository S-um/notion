
#include <unistd.h>

void ft_print_comb2(void)
{
	char num1[2];
	char num2[2];
	int first, second;

	first = 0;
	while(first<=97) {
		second = first+1;
		while(second<=99) {
			num1[0] = first/10+'0';
			num1[1] = first%10+'0';
			num2[0] = second/10+'0';
			num2[1] = second%10+'0';
			
			write(1,num1,2);
			write(1," ",1);
			write(1,num2,2);
			write(1,", ",2);
			++second;
		}
		++first;
	}
	write(1,"98 99",5);
}
