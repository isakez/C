/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaacsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:21:27 by isaacsan          #+#    #+#             */
/*   Updated: 2025/07/13 14:58:53 by isaacsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(char dig[])
{
	char	coma;
	char	esp;

	coma = 44;
	esp = ' ';
	if (dig[0] == '7' && dig[1] == '8' && dig[2] == '9')
	{
		write(1, dig, 3);
	}
	else
	{
		write(1, dig, 3);
		write(1, &coma, 1);
		write(1, &esp, 1);
	}
}

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	digits[0] = '0';
	digits[0] = '0';
	while (digits[0] < '8')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				escribe(digits);
				++digits[2];
			}
			++digits[1];
		}
		++digits[0];
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
