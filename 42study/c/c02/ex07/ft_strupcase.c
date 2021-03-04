char *ft_strupcase(char *str)
{
	char *s;
	s = str;
	while(*s) {
		if('a'<=*s && *s<='z')
			*s -= 32;
		++s;
	}

	return str;
}
