#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int	num1;
	int	num2;
	int	res_div;
	int	res_mod;
	int	*division;
	int	*modulo;
	
	num1 = 10;
	num2 = 2;
	division = &res_div;
	modulo = &res_mod;
	ft_div_mod(num1, num2, division, modulo);
	printf("el resultado de la division es: %d\n", res_div);
	printf("el resultado del modulo es: %d\n", res_mod);
	return (0);
}

