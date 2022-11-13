/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:38:38 by antmoren          #+#    #+#             */
/*   Updated: 2022/11/11 22:12:47 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	handler(int signal)
{
	static char	c = 0;
	static int	pos = 0;
	int			bit;

	if (signal == SIGUSR1)
		bit = 0;
	else if (signal == SIGUSR2)
		bit = 1;
	else
		exit(EXIT_FAILURE);
	c += bit << pos++;
	if (pos == 7)
	{
		if (!c)
			c = '\n';
		ft_putchar_fd(c, 1);
		c = 0;
		pos = 0;
	}
}

static void	set_handlers(void)
{
	struct sigaction	act;

	act.sa_handler = handler;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
}

int	main(void)
{
	set_handlers();
	ft_putstr_fd("Server running: PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (42)
		pause();
}