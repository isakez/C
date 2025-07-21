/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaacsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:10:06 by isaacsan          #+#    #+#             */
/*   Updated: 2025/07/21 18:43:04 by isaacsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	keepnum;
	i = 0;
	while( i <= size/2)
	{	
		keepnum = tab[i];
		tab[i] = tab[size -1 -i];
		tab[size -1 -i] = keepnum;
		++i;
	}	
}
/*
void	print_array(int *arr, int size)
{
	int	i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int	main(void)
{
	int	arrint[6] = {1, 3, 4, 7, 8, 6};

	printf("Vector antes de invertir: ");
	print_array(arrint, 6);

	ft_rev_int_tab(arrint, 6);

	printf("Vector después de invertir: ");
	print_array(arrint, 6);

	return 0;
}
*/
