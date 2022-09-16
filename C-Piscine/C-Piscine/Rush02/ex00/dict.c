/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruzafa- <aruzafa-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:24:29 by aruzafa-          #+#    #+#             */
/*   Updated: 2022/02/27 23:25:11 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "list.h"
#include "string_utils.h"
#include "string_utils2.h"
#include "scanner.h"

void	ft_print_special_numbers(t_entry *list, int len, int *special)
{
	char	*cpy;
	char	*text;

	if (len >= 4 && len % 3 == 1 && *special)
	{
		cpy = ft_give_more_zeros(len);
		text = ft_value_of(list, cpy);
		free(cpy);
		ft_print(text);
		ft_print(" ");
		*special = 0;
	}
}

void	ft_tr_num(t_entry *list, char *num, int len, int printed, int special)
{
	char	*cpy;
	char	*text;

	if (len == 0)
		return ;
	if (num[0] == '0')
	{
		ft_print_special_numbers(list, len, &special);
		ft_tr_num(list, num + 1, len - 1, 0, special);
		return ;
	}
	if (len % 3 == 0)
	{
		cpy = ft_substr(num, 0, 0);
		text = ft_value_of(list, cpy);
		ft_print(text);
		free(cpy);
		ft_print(" ");
		ft_print(ft_value_of(list, "100"));
		ft_print(" ");
		special = 1;
	}
	else if (len % 3 == 1 && !printed)
	{
		cpy = ft_substr(num, 0, 0);
		text = ft_value_of(list, cpy);
		ft_print(text);
		free(cpy);
		ft_print(" ");
		ft_print_special_numbers(list, len, &special);
	}
	else if (len % 3 == 2)
	{
		cpy = ft_substr(num, 0, 1);
		if (ft_atoi(cpy) <= 20)
		{
			ft_print(ft_value_of(list, cpy));
			free(cpy);
			ft_tr_num(list, num + 1, len - 1, 1, 1);
			return ;
		}
		else
		{
			free(cpy);
			cpy = ft_substr(num, 0, 1);
			ft_print(ft_value_of(list, ft_truncate_str(cpy, 0)));
			ft_print(" ");
			free(cpy);
		}
		special = 1;
	}
	ft_tr_num(list, num + 1, len - 1, 0, special);
}

int	ft_read_line(int file, t_entry **list, char *buffer)
{
	int		error;
	char	*key;
	char	*value;
	
	key = ft_read_number(file, *buffer, &error);
	if (error != 0)
		return (1);
	value = ft_read_value(file, &error);
	if (error != 0)
		return (1);
	ft_insert_node(list, key, value);
	return (0);
}

int	ft_dict(char *file_name, char *number)
{
	int		file;
	char	buffer;
	t_entry	*list;
	int		len;

	list = ft_init_list();
	file = open(file_name, O_RDONLY);
	while (read(file, &buffer, 1))
		if (ft_read_line(file, &list, &buffer) != 0)
			return (1);
	len = ft_str_len(number);
	ft_tr_num(list, number, len, 0, 1);
	if (close(file) < 0)
	{	
		return (1);
	}
	return (0);
}
