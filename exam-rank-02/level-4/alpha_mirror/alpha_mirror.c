/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:13:33 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/17 19:57:50 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'z' - (argv[1][i] - 'a');
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] = 90 - (argv[1][i] - 'A');
			if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] = 97 + (argv[1][i] - 'n');
			if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] = 65 + (argv[1][i] - 'N');
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
