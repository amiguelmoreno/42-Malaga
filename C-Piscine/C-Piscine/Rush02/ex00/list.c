/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruzafa- <aruzafa-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:21:37 by aruzafa-          #+#    #+#             */
/*   Updated: 2022/02/27 22:36:14 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "string_utils.h"
#include <stdlib.h>

t_entry	*ft_init_list(void)
{
	return (0);
}

void	ft_insert_node(t_entry **list, char *key, char *value)
{
	t_entry	*new_node;

	new_node = malloc(sizeof(t_entry));
	new_node->key = key;
	new_node->value = value;
	new_node->next = *list;
	*list = new_node;
}

void	ft_print_list(t_entry *list)
{	
	while (list)
	{
		ft_print("Key: ");
		ft_print(list->key);
		ft_print(", value: ");
		ft_print(list->value);
		ft_print("\n");
		list = list->next;
	}
}

char	*ft_value_of(t_entry *list, char *key)
{
	while (list)
	{
		if (ft_str_cmp(list->key, key) == 0)
			return (list->value);
		list = list->next;
	}
	return (0);
}
