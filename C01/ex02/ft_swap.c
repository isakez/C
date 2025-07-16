#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	
	c = *b;
	*b = *a;
	*a = c;
	
}
/*
int	main(void)
{
	int	num1;
	int	num2;
	int	*pta, *ptb;

	num1 = 2;
	num2 = 10;

	pta = &num1;
	ptb = &num2;
	printf("numero 1 es: %d", num1);
	printf("numero 2 es: %d", num2);
	ft_swap(pta,ptb);
	printf("numero 1 es: %d", num1);
	printf("numero 2 es: %d", num2);

}
*/
