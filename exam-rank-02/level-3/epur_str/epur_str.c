/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:45:51 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/27 19:36:32 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	pos;
	int	space;

	pos = 0;
	space = 0;
	if (argc == 2)
	{
		while (argv[1][pos] == ' ' || argv[1][pos] == '\t')
			pos++;
		while (argv[1][pos])
		{
			if (argv[1][pos] == ' ' || argv[1][pos] == '\t')
				space = 1;
			if (argv[1][pos] != ' ' && argv[1][pos] != '\t')
			{
				if (space == 1)
				{
					write(1, " ", 1);
					space = 0;
				}
				write(1, &argv[1][pos], 1);
			}
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
