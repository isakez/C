#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while(*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	string;
	char	*ptstr;

	ptstr = "hola";

	ft_putstr(ptstr);
	return (0);
}
