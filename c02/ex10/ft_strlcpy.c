#include <stdio.h>
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	length;

	length = 0;
	while (*(src + length) != '\0' && size - 1 > 0)
	{
		*dst = *(src + length);
		dst++;
		length++;
		size--;
	}
	*dst = '\0';
	while (*(src + length) != '\0')
		++length;
	return (length);

}

int	main()
{
	unsigned int	n;
	n = 40;
	char	*src;
	char	dst[20];

	src = "probamos  con algo  + largo 90";
	printf("la funcion devuelve: %u\n", ft_strlcpy(dst,src,n));
	
	printf("dst es: %s\n",dst);
	printf("numero sin signo %u",n);
}
