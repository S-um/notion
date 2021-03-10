
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

int postoi(char *str)
{
	int num;
	num = 0;
	while('0'<=*str && *str<='9')
	{
		num *= 10;
		num += *str-'0';
		++str;
	}
	return num;
}

int ft_atoi(char *str)
{
	int num;
	int sign;
	sign = 1;
	str = jump_blank(str);
	str = is_pos(str,&sign);
	num = postoi(str);
	num *= sign;

	return num;
}
