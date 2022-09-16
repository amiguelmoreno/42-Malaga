/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils2.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:04:23 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/27 22:32:03 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS2_H
# define STRING_UTILS2_H

/*
 * Receives a string and a position number.
 * Return a string without the characters before the position indicated
 * in the parameter and all the characters after the position set to '0'.
 */
char	*ft_truncate_str(char *c, int pos);

/*
 * Allocate a copy of the str string, starting on the index min
 * up to the index max.
 */
char	*ft_substr(char *str, int min, int max);

/*
 * Allocate a zero string starting with one with len size.
 */
char	*ft_give_more_zeros(int len);

#endif
