char *ft_strlowcase(char *str)
{
	char *s;
	s = str;
	while(*s) {
		if('A'<=*s && *s<='Z')
			*s += 32;
		++s;
	}
	return str;
}
