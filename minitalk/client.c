/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:38:44 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/30 18:03:48 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/includes/ft_printf.h"
#include "../ft_printf/libft/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define END "\033[0m"

void	signal_error(void)
{
	ft_printf("\n%sclient: unexpected error.%s\n", RED, END);
	exit(EXIT_FAILURE);
}

void	char_to_bin(unsigned char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & 128)
		{
			if (kill(pid, SIGUSR2) == -1)
				signal_error();
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				signal_error();
		}
		c <<= 1;
		bit++;
		pause();
		usleep(100);
	}
}

void	sent_text(char *str, int pid)
{
	int	i;

	i = 0;
	while (str[i])
		char_to_bin(str[i++], pid);
	char_to_bin('\0', pid);
}

void	recieved(int sig)
{
	static int	sent;

	if (sig == SIGUSR1)
	{
		ft_printf("%s%d signal sent successfully!%s\n", GREEN, ++sent, END);
		exit(EXIT_SUCCESS);
	}
	if (sig == SIGUSR2)
		++sent;
}

int	main(int ac, char **av)
{
	int	server_pid;
	int	client_pid;

	client_pid = getpid();
	if (ac == 3)
	{
		ft_printf("%sclient pid: %d%s\n", RED, client_pid, END);
		signal(SIGUSR1, recieved);
		signal(SIGUSR2, recieved);
		server_pid = ft_atoi(av[1]);
		ft_printf("%sText currently sending.. %s\n", YELLOW, END);
		sent_text(av[2], server_pid);
	}
	else
		ft_printf("%susage: ./client <server_pid> <text to send>%s\n", RED,
				END);
	return (EXIT_FAILURE);
}
