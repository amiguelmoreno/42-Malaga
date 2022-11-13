/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:51:04 by antmoren          #+#    #+#             */
/*   Updated: 2022/03/02 17:56:21 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
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
}
