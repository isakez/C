#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	return(s1[i] - s2[i]);
}

#define N 4	

int main()
{
	char	*s;
	char	*s1;

	s = "Hel~o world";
	s1 = "Hell world";
	printf("N->%d\n%s\n%s\nstrncmp-> %d\nft_strcmp-> %d\n\n\n",N, s, s1, strncmp(s, s1, N), ft_strncmp(s, s1, N));

	s = "hello world";
	s1 = "hel world";
	printf("N->%d\n%s\n%s\nstrncmp-> %d\nft_strcmp-> %d\n\n\n", N ,s, s1, strncmp(s, s1, N), ft_strncmp(s, s1, N));

	s = "hel world";
	s1 = "hello world";
	printf("N->%d\n%s\n%s\nstrncmp-> %d\nft_strcmp-> %d\n\n\n",N, s, s1, strncmp(s, s1, N), ft_strncmp(s, s1, N));


	s = "";
	s1 = "";
	printf("N->%d\n\"%s\"\n\"%s\"\nstrncmp-> %d\nft_strcmp-> %d\n\n\n",N, s, s1, strncmp(s, s1, N), ft_strncmp(s, s1, N));
}
