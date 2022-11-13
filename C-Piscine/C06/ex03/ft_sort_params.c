/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 11:56:20 by antmoren          #+#    #+#             */
/*   Updated: 2022/03/02 18:04:13 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int max, char **w1)
{
	int		counter;
	char	*aux;

	counter = 1;
	while (counter < max - 1)
	{
		if (ft_strcmp(w1[counter], w1[counter + 1]) > 0)
		{
			aux = w1[counter];
			w1[counter] = w1[counter + 1];
			w1[counter + 1] = aux;
			counter = 0;
		}
		counter++;
	}
}

int	print_tab(int argc, char **argv)
{
	int	i;
	int	m;
	int	newline;

	newline = '\n';
	i = 1;
	while (i < argc)
	{
		m = 0;
		while (argv[i][m])
		{
			write(1, &argv[i][m], 1);
			m++;
		}
		write(1, &newline, 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ft_sort(argc, argv);
	print_tab(argc, argv);
}
