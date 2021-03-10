
#include <unistd.h>

void ft_put_pos(unsigned int nb)
{
	char print_char;
	if(nb/10)
		ft_put_pos(nb/10);
	print_char = nb%10 + '0';
	write(1,&print_char,1);
}

void ft_putnbr(int nb)
{
	unsigned int num;
	if(nb<0)
	{
		write(1,"-",1);
		num = (long long)nb * -1;
	}
	else
		num = nb;
	ft_put_pos(num);
}
