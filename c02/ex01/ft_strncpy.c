
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;

	while ( *src != 0 && n != 0)
	{
		*(dest + i) = *src;
		src++;
		i++;
		n--;
	}
	while ( n != 0)
	{
		*(dest + i) = '\0';
		i++;
		n--;
	}
	return (dest);
}

