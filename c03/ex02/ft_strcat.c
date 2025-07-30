#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dst, char *src)
{
	int	i_dst;
	int	i_src;
	
	i_dst = 0;
	i_src = 0;
	while (dst[i_dst] != '\0')
		i_dst++;
	while (src[i_src] != '\0')
	{
		dst[i_dst] = src[i_src];
		i_src++;
		i_dst++;
	}
	dst[i_dst] = '\0';

	return (dst);
}

#define DEST_SIZE 13

int main()
{
	char	s[DEST_SIZE] = "hello";
	char	s1[100] = " world";

	puts("ORIGINAL strcat");
	printf("\"%s\" + \"%s\" =\n", s, s1);
	printf("\"%s\"\n", strcat(s, s1));
	puts("");	
	char	s2[DEST_SIZE] = "hello";
	char	s3[100] = " world";

	puts("MY FAKE ft_strcat");
	printf("\"%s\" + \"%s\" =\n", s2, s3);
	printf("\"%s\"\n", ft_strcat(s2, s3));
}
