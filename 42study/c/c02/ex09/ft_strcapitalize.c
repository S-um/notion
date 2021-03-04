char *ft_strcapitalize(char *str)
{
	int isWordFirst;
	char *s;
	isWordFirst = 1;
	s = str;
	while(*s) {
		if((*s<'a' || *s>'z') && (*s<'A' || *s>'Z') && (*s<'0' || *s>'9'))
			isWordFirst = 1;
		else if(isWordFirst) {
			if('a'<=*s && *s<='z')
				*s -= 32;
			isWordFirst = 0;
		}else if(!isWordFirst && 'A'<=*s && *s<='Z')
			*s += 32;
		++s;
	}
	return str;
}
