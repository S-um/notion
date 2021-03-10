char *ft_strstr(char *str, char *to_find)
{
	char *strptr;
	char *findptr;
	while(*str)
	{
		strptr = str;
		findptr = to_find;
		while(*findptr && *strptr == *findptr)
		{
			++strptr;
			++findptr;
		}
		if(!*findptr)
			return str;
		++str;
	}
	return 0;
}
