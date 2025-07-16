include <stdio.h>

void	ft_ultimate_div(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int	main(void)
{
	int	num1;
	int	num2;
	int	*pnum1;
	int	*pnum2;
	
	num1 = 10;
	num2 = 2;
	pnum1 = &num1;
	pnum2 = &num2;

	ft_ultimate_div(pnum1, pnum2);
	printf("el resultado de la division es: %d\n", num1);
	printf("el resultado del modulo es: %d\n", num2);
}
