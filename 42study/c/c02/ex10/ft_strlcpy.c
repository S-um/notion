unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	--size;
	while(src[index] && index<size) {
		dest[index] = src[index];
		++index;
	}
	dest[index] = 0;
	while(src[index])
		++index;
	return index;
}
