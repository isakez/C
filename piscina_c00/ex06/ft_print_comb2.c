/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaacsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:17:04 by isaacsan          #+#    #+#             */
/*   Updated: 2025/07/14 19:33:34 by isaacsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(int digit)
{
	char	c;

	c = (digit / 10) + 48;
	write(1, &c, 1);
	c = (digit % 10) + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	dig[2];

	dig[0] = 0;
	dig[1] = 0;
	while (dig[0] < 99)
	{
		dig[1] = dig[0] + 1;
		while (dig[1] < 100)
		{
			escribe(dig[0]);
			write(1, " ", 1);
			if (dig[0] == 98)
			{
				escribe(dig[1]);
			}
			else
			{
				escribe(dig[1]);
				write(1, ", ", 2);
			}
			++dig[1];
		}
		++dig[0];
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
