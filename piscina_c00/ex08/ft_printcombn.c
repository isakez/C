
#include <unistd.h>

void	recursive_combn(char *string, int index, int n)
{
	if (index == n)
	{
		write(1, string, n);
		if (string[0] != '9' - n + 1)
			write(1, ", ", 2);
	}
	else
	{
	string[index] = string[index - 1] + 1;
	while (string[index] <= '9')
	{
		recursive_combn(string, index + 1, n);
		string[index]++;
	}
	}
}

void	ft_print_combn(int n)
{
	char	string[11];
	
	string[0] = 47;
	recursive_combn(string + 1 , 0, n);
	
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
