/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruzafa- <aruzafa-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:24:29 by aruzafa-          #+#    #+#             */
/*   Updated: 2022/02/27 22:27:35 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "list.h"
#include "string_utils.h"
#include "scanner.h"

void	print_special_numbers(t_entry *list, int len, int *special)
{
	char	*cpy;
	char	*text;

	if (len >= 4 && len % 3 == 1 && *special)
	{
		cpy = give_more_zeros(len);
		text = value_of(list, cpy);
		free(cpy);
		print(text);
		print(" ");
		*special = 0;
	}
}

void	tr_num(t_entry *list, char *num, int len, int printed, int special)
{
	char	*text;
	char	*cpy;

	if (len == 0)
		return ;
	if (num[0] == '0')
	{
		print_special_numbers(list, len, &special);
		tr_num(list, num + 1, len - 1, 0, special);
		return ;
	}
	if (len % 3 == 0)
	{
		cpy = substr(num, 0, 0);
		print(value_of(list, cpy));
		free(cpy);
		print(" ");
		print(value_of(list, "100"));
		print(" ");
		special = 1;
	}
	else if (len % 3 == 1 && !printed)
	{
		cpy = substr(num, 0, 0);
		print(value_of(list, cpy));
		free(cpy);
		print(" ");
		print_special_numbers(list, len, &special);
	}
	else if (len % 3 == 2)
	{
		cpy = substr(num, 0, 1);
		if (atoi(cpy) <= 20)
		{
			print(value_of(list, cpy));
			free(cpy);
			tr_num(list, num + 1, len - 1, 1, 1);
			return ;
		}
		else
		{
			free(cpy);
			cpy = substr(num, 0, 1);
			print(value_of(list, truncate_str(cpy, 0)));
			print(" ");
			free(cpy);
		}
		special = 1;
	}
	tr_num(list, num + 1, len - 1, 0, special);
}

int	read_line(t_entry **list, char *buffer)
{
	int		error;
	char	*key;
	char	*value;

	key = read_number(file, buffer, &error);
	if (error != 0)
		return (1);
	value = read_value(file, buffer, &error);
	if (error != 0)
		return (1);
	insert_node(list, key, value);
	return (0);
}

int	dict(char *file_name, char *number)
{
	int		file;
	char	buffer;
	t_entry	*list;
	int		len;

	list = init_list();
	file = open(file_name, O_RDONLY);
	while (read(file, &buffer, 1))
		if (read_line(file, &buffer) != 0)
			return (1);
	len = str_len(number);
	tr_num(list, number, len, 0, 1);
	if (close(file) < 0)
	{	
		return (1);
	}
	return (0);
}
