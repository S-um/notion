int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && (*s1 || *s2))
	{
		if(*s1>*s2)
			return 1;
		if(*s1<*s2)
			return -1;
		++s1;
		++s2;
		--n;
	}
	return 0;
}
