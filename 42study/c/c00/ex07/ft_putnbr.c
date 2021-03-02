
#include <unistd.h>

void ft_putnbr(int nb)
{
	char prt;
	int ten;

	if(-2147483648 == nb) {
		write(1,"-2147483648",11);
		return;
	}else if(nb<0) {
		write(1,"-",1);
		nb *= -1;
	}

	ten = 1;
	while(nb/ten)
		ten *= 10;
	ten /= 10;
	while(ten) {
		prt = nb/ten + '0';
		write(1,&prt,1);
		nb %= ten;
		ten /= 10;
	}
}
