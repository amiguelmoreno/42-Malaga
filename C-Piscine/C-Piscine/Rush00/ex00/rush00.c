/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jujimene <jujimene@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:46:41 by jujimene          #+#    #+#             */
/*   Updated: 2022/02/13 13:30:49 by jujimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_objects(int c,	int r,	int x,	int y)
{
	if (r == 1 || r == y)
	{
		if (c == 1 || c == x)
			return ('o');
		else
			return ('-');
	}
	else
	{
		if (c == 1 || c == x)
			return ('|');
		else
			return (' ');
	}
}

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			ft_putchar(ft_objects(c, r, x, y));
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
