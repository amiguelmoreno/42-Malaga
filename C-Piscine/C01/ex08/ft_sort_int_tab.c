/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:52:49 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/18 10:48:51 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	m;
	int	checker;
	int	aux;

	i = 0;
	checker = 0;
	while (checker < size - 1)
	{
		while (i < size - 1)
		{
			m = i + 1;
			if (tab[i] > tab[m])
			{
				aux = tab[i];
				tab[i] = tab[m];
				tab[m] = aux;
			}
			i++;
		}
		i = 0;
		checker++;
	}
}
/*
int main(void)
{
	int arr[] = {25, 2, 7, 19, 12, 5, 32, 54, 2, 4, 4, 6, 2, 89, 31, 3};
	int printer;

	printer = 0;

	ft_sort_int_tab(arr, 16);
		while(printer < 16)
		{
			printf("%d ", arr[printer] );
			printer++;
		}

		return (0);
}
*/
