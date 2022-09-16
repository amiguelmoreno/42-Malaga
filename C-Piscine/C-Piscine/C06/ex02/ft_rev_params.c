/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:29:06 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/27 11:55:15 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	m;
	int	newline;

	newline = '\n';
	i = argc - 1;
	while (i > 0)
	{
		m = 0;
		while (argv[i][m])
		{
			write(1, &argv[i][m], 1);
			m++;
		}
		write(1, &newline, 1);
		i--;
	}
}
