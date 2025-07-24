

int	ft_str_is_alpha(char *str)
{
	int	i;
	char	a;

	i = 0;
	a = 48;

	while ( str[i] != 0)
	{

		if (str[i] >= 'a' && str[i] <= 'z' )
			i++;
		if (str[i] >= 'A' && str[1] <= 'Z')
			i++;
		else
			return (0);

	}
	return (1);
}
