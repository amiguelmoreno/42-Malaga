/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:36:31 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/18 10:24:57 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{	
	int	aux;
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[f];
		tab[f] = aux;
		i++;
		f--;
	}
}
/*
int	main(void)
{
		int	arr[] = {10, 20, 30, 40};
		int	printer;

		printer = 0;
		
		ft_rev_int_tab(arr, 4);
		while (printer < 4)
		{
			printf("%d ", arr[printer] );
			printer++;
		}

		return (0);
}
*/
