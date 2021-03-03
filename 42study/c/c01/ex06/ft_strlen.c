int ft_strlen(char *str)
{
	int strlen;
	strlen = 0;
	while(*str) {
		++str;
		++strlen;
	}
	return strlen;
}
