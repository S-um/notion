
#include <unistd.h>

int get_digit_len(char *base)
{
	int i;
	int j;
	i = 0;
	while(base[i])
	{
		if('+' == base[i] || '-' == base[i])
			return 0;
		j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
				return 0;
			++j;
		}
		++i;
	}
	return i;
}

void ft_put_pos_base(unsigned int nbr, char *base, int digit)
{
	if(nbr/digit)
		ft_put_pos_base(nbr/digit,base,digit);
	write(1,base + nbr%digit,1);
}

void ft_putnbr_base(int nbr, char *base)
{
	unsigned int num;
	int digit;
	if(nbr<0)
	{
		write(1,"-",1);
		num = (long long)nbr * -1;
	}
	else
		num = nbr;

	digit = get_digit_len(base);
	if(digit < 2)
		return;
	ft_put_pos_base(num,base,digit);
}
