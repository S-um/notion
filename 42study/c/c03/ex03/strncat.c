char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	while(*dest)
		++dest;
	while(*src && nb)
	{
		*dest = *src;
		++dest;
		++src;
		--nb;
	}
	*dest = 0;
	return dest;
}
