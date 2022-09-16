/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:45:55 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/06 12:55:15 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_conversion(char value, va_list ptr)
{
	int	sub_cnt;

	sub_cnt = 0;
	if (value == 'c')
		sub_cnt = ft_treat_char(ptr, sub_cnt);
	else if (value == 's')
		sub_cnt = ft_treat_string(ptr, sub_cnt);
	else if (value == 'p')
		sub_cnt = ft_treat_pointer(va_arg(ptr, unsigned long), sub_cnt);
	else if (value == 'd' || value == 'i')
		sub_cnt = ft_treat_decorint10(ptr, sub_cnt);
	else if (value == 'u')
		sub_cnt = ft_treat_unsigned_dec(ptr, sub_cnt);
	else if (value == 'x')
		sub_cnt = ft_treat_hex_min(va_arg(ptr, unsigned int), sub_cnt);
	else if (value == 'X')
		sub_cnt = ft_treat_hex_may(va_arg(ptr, unsigned int), sub_cnt);
	else if (value == '%')
		sub_cnt = ft_treat_percent(sub_cnt);
	return (sub_cnt);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		cnt;
	va_list	ptr;

	i = 0;
	cnt = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			cnt += ft_conversion(format[i + 1], ptr);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			cnt++;
			i++;
		}
	}
	va_end(ptr);
	return (cnt);
}
/*
#include <stdio.h>

int	main(void)
{
	int				i;
	char			*str;
	int				*ptr;
	unsigned int	num;

	num = 4875444;
	i = 't';
	str = "Goriontxu ha vuelto 12345";
	//char
	printf("Printf -> char: %c\n", i);
	ft_printf("Printf -> char: %c\n", i);
	// string
	printf("Printf -> string: %s\n", str);
	ft_printf("Printf -> string: %s\n", str);
	// puntero
	printf("%i \n", printf("Printf -> puntero: %p\n", &ptr));
	printf("%i \n", ft_printf("Printf -> puntero: %p\n", &ptr));
	// decimal
	printf("Printf -> decimal: %d\n", num);
	ft_printf("Printf -> decimal: %d\n", num);
	//entero base 10
	printf("Printf -> integer base 10: %i\n", num);
	ft_printf("Printf -> integer base 10: %i\n", num);
	//unsigned decimal
	printf("Printf -> unsigned decimal: %u\n", num);
	ft_printf("Printf -> unsigned decimal: %u\n", num);
	//hexadecimal minuscula
	printf("Printf -> hexadecimal minuscula: %x\n", num);
	ft_printf("Printf -> hexadecimal minuscula: %x\n", num);
	//hexadecimal mayuscula
	printf("Printf -> hexadecimal mayuscula: %X\n", num);
	ft_printf("Printf -> hexadecimal mayuscula: %X\n", num);
	//porcentaje
	printf("Printf -> porcentaje: %%\n");
	ft_printf("Printf -> porcentaje: %%\n");
}
*/