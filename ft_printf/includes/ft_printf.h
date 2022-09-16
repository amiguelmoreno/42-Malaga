/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:51:39 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/06 12:56:07 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(char const *format, ...);

// ft_printf.c
int		ft_conversion(char value, va_list ptr);

//sources
int		ft_treat_char(va_list ptr, int sub_cnt);
int		ft_treat_decimal(va_list ptr, int sub_cnt);
int		ft_treat_decorint10(va_list ptr, int sub_cnt);
int		ft_treat_unsigned_dec(va_list ptr, int sub_cnt);
int		ft_treat_hex_min(unsigned int number, int sub_cnt);
int		ft_puthexmin(unsigned int number, int sub_cnt);
int		ft_treat_hex_may(unsigned int number, int sub_cnt);
int		ft_puthexmay(unsigned int number, int sub_cnt);
int		ft_treat_percent(int sub_cnt);
int		ft_treat_string(va_list ptr, int sub_cnt);
int		ft_treat_pointer(unsigned long number, int sub_cnt);
int		ft_putpnt(unsigned long number, int sub_cnt);
void	ft_putchar(char c);
void	ft_putnbr(long int nb);
void	ft_putstr(char *str);
int		ft_passbase10(unsigned int num, va_list ptr, int sub_cnt);

#endif