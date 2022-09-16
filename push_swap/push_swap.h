/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:44:49 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/13 19:55:32 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/includes/ft_printf.h"
# include <unistd.h>

typedef struct s_list
{
	int				*value;
	struct s_list	*previous;
	struct s_list	*next;
}					t_stack;

#endif