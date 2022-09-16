/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruzafa- <aruzafa-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:24:12 by aruzafa-          #+#    #+#             */
/*   Updated: 2022/02/27 22:32:37 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_node {
	char			*key;
	char			*value;
	struct s_node	*next;
}					t_entry;

/*
 * Returns an empty list.
 */
t_entry	*ft_init_list(void);

/* 
 * Create and inserts a node in a given list.
 */
void	ft_insert_node(t_entry **list, char *key, char *value);

/* 
 * Prints a list given in the parameters.
 */
void	ft_print_list(t_entry *list);

/*
 * Receives a list of entries and a key.
 * Returns the value of the key in the list.
 */
char	*ft_value_of(t_entry *list, char *key);

#endif
