char *jump_blank(char *str)
{
	while(' ' == *str || '\t' == *str)
		++str;
	return str;
}

char *is_pos(char *str, int *sign)
{
	while('-' == *str || '+' == *str)
	{
		if('-' == *str)
			*sign *= -1;
		++str;
	}
	return str;
}

int postoi_base(char *str, char *base, int digit)
{
	int num;
	int i;
	num = 0;
	while(*str)
	{
		i = 0;
		while(*str != base[i] && base[i])
			++i;
		if(0 == base[i])
			return 0;
		num *= digit;
		num += i;
		++str;
	}
	return num;
}

int get_digit_len(char *base)
{
	int digit_len;
	char *ptr;
	digit_len = 0;
	while(*base)
	{
		if('+' == *base || '-' == *base || ' ' == *base || '\t' == *base)
			return 0;
		ptr = base + 1;
		while(*ptr)
			if(*base == *(ptr++))
				return 0;
		++base;
		++digit_len;
	}
	return digit_len;
}

int ft_atoi_base(char *str, char *base)
{
	int digit;
	int num;
	int sign;
	str = jump_blank(str);
	sign = 1;
	str = is_pos(str,&sign);
	digit = get_digit_len(base);
	if(digit<2)
		return 0;
	num = postoi_base(str,base,digit);
	num *= sign;
	return num;
}
