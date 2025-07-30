#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dst, char *src, unsigned int nb)
{
	int	i_dst;
	int	i_src;
	
	i_dst = 0;
	i_src = 0;
	while (dst[i_dst] != '\0')
		i_dst++;
	while (src[i_src] != '\0' && nb--)
	{
		dst[i_dst] = src[i_src];
		i_src++;
		i_dst++;
	}
	dst[i_dst] = '\0';

	return (dst);
}


#define DEST_SIZE 13
#define N 3

int main()
{
	char	s[DEST_SIZE] = "hello";
	char	s1[100] = " world";

	puts("ORIGINAL strncat");
	printf("Chars i wanna cat %d\n", N);
	printf("\"%s\" + \"%s\" =\n", s, s1);
	printf("\"%s\"\n", strncat(s, s1, N));
	
	char	s2[DEST_SIZE] = "hello";
	char	s3[100] = " world";
	puts("");

	puts("My FAKE strncat");
	printf("Chars i wanna cat %d\n", N);
	printf("\"%s\" + \"%s\" =\n", s2, s3);
	printf("\"%s\"\n", ft_strncat(s2, s3, N));
}


