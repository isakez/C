
#include <stdio.h>
#include <unistd.h>
void	*ft_strcpy(char *dest,char *src)
{
	int	i;

	i = 0;
	while (*src != 0)
	{
		*(dest + i) = *src;
		i++;
		src++;
	}

	return (dest);
}

int	main(void)
{
	char	dest[3];
	ft_strcpy(dest,"hola");
	write(1,&dest, 3);

}
