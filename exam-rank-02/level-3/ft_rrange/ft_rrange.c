/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:37:27 by mbarutel          #+#    #+#             */
/*   Updated: 2022/06/28 19:03:02 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*ret;
	int	i;

	if (start > end)
		ret = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		ret = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	if (ret)
	{
		while (end != start)
		{
			ret[i] = end;
			if (end > start)
				end--;
			if (end < start)
				end++;
			i++;
		}
		ret[i] = start;
		return (ret);
	}
	return (0);
}

int	main(void)
{
	int	*lst;

	lst = ft_rrange(-18, -3);
	printf("%p\n", lst);
	printf("%d\n", lst[0]);
	printf("%d\n", lst[15]);
}
