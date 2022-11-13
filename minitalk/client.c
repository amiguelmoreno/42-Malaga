/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:38:44 by antmoren          #+#    #+#             */
/*   Updated: 2022/11/11 13:59:10 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#define DELAY 100

static void	send_msg(int pid, char *str)
{
	int	pos;
	int	len;
	int	i;

	len = ft_strlen(str);
	i = -1;
	while (++i <= len)
	{
		pos = -1;
		while (++pos < 7)
		{
			if ((str[i] >> pos) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(DELAY);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putstr_fd("Usage: client <PID> <string>\n", 1);
		exit(EXIT_FAILURE);
	}
	send_msg(ft_atoi(av[1]), av[2]);
}
