/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaacsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:36:08 by isaacsan          #+#    #+#             */
/*   Updated: 2025/07/14 21:09:27 by isaacsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	dig[10];
	int		i;
	int		n;

	i = 0;
	n = nb;
	if (n < 0)
	{
		escribe('-');
		n = -n;
	}
	if (n == 0)
	{
		write(1, "0", 1);
	}
	while (n > 0)
	{
		dig[i++] = (n % 10) + 48;
		n = n / 10;
	}
	i = i -1;
	while (i >= 0)
	{
		escribe(dig[i--]);
	}
}

int	main(void)
{
	ft_putnbr(442);
	ft_putnbr(0);
	ft_putnbr(2147483647);
	return (0);
}
