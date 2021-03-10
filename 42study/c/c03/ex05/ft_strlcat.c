unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len;
	len = 0;
	--size;
	while(*dest)
	{
		++dest;
		++len;
	}
	while(*src && len<size)
	{
		*dest = *src;
		++dest;
		++src;
		++len;
	}
	*dest = 0;

	return len;
}
