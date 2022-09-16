/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:03:19 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:58:00 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nex_lst;

	if (!lst)
		return ;
	nex_lst = lst;
	while (nex_lst != NULL)
	{
		f(nex_lst->content);
		nex_lst = nex_lst->next;
	}
}
