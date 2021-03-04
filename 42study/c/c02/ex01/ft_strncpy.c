char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;
	while(i<n){
		dest[i] = src[i];
		if(0 == src[i])
			break;
		++i;
	}
	return dest;
}
