/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaacsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:17:23 by isaacsan          #+#    #+#             */
/*   Updated: 2025/07/12 20:05:11 by isaacsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signo;

	if (n < 0)
	{
		signo = 'N';
		write(1, &signo, 1);
	}
	else
	{
		signo = 'P';
		write(1, &signo, 1);
	}
}
/*
int	main(void)
{
	int	i;

	i = -2;
	ft_is_negative(i);
}
*/
