/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaacsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:04:52 by isaacsan          #+#    #+#             */
/*   Updated: 2025/07/21 17:50:14 by isaacsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int	count;
	
	count = 0;
	while ( str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
		
	printf("numero de caractere: %d ",ft_strlen("prueba"));
	return(0);
}
*/
