/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaacsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:52:53 by isaacsan          #+#    #+#             */
/*   Updated: 2025/07/21 19:22:43 by isaacsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;
	
	i = 0;
	while( i < size -1)
	{
		j = 0;
		while (j < size -1 -i)
		{
			if ( tab[j] > tab[j+1])
			{
				tmp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = tmp;
			}
			++j;
		}
		++i;
	}
}

int	main(void)
{
	int	arr[] = {42, 13, -6, 89, 2, 33};
	int	size = sizeof(arr) / sizeof(arr[0]);
	int	i;

	printf("Antes de ordenar:\n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("Después de ordenar (pero no lo hace bien):\n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
