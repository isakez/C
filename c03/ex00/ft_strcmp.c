#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);

}

int main()
{
	char	*s; 
	char	*s1; 

	s = "Hello";
	s1 = "Hello";
	printf("%s\n%s\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));

	s = "hello";
	s1 = "hel";
	printf("%s\n%s\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));

	s = "hel";
	s1 = "hello";
	printf("%s\n%s\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));


	s = "";
	s1 = "";
	printf("\"%s\"\n\"%s\"\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));
}
