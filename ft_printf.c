/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-14 11:30:23 by cfaris            #+#    #+#             */
/*   Updated: 2026-11-14 11:30:23 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(char f, va_list *args)
{
	if (f == 'c')
		return (ft_putchar_len(va_arg(*args, int)));
	if (f == 'd' || f == 'i')
		return (ft_putnbr_len(va_arg(*args, int)));
	if (f == 's')
		return (ft_putstr_len(va_arg(*args, char *)));
	if (f == 'p')
		return (ft_putptr_len(va_arg(*args, void *)));
	if (f == 'u')
		return (ft_putunbr_len(va_arg(*args, unsigned int)));
	if (f == 'x')
		return (ft_puthex_len(va_arg(*args, unsigned int), HEX_LOW));
	if (f == 'X')
		return (ft_puthex_len(va_arg(*args, unsigned int), HEX_UP));
	if (f == '%')
		return (ft_putchar_len('%'));
	return (-1);
}

static int	ft_handle(const char *from, int i, va_list *args)
{
	if (from[i] == '%')
		return (ft_convert(from[i + 1], args));
	return (ft_putchar_len(from[i]));
}

int	ft_printf(const char *from, ...)
{
	va_list	args;
	int		i;
	int		total;
	int		ret;

	if (!from)
		return (-1);
	va_start(args, from);
	i = 0;
	total = 0;
	while (from[i])
	{
		ret = ft_handle(from, i, &args);
		if (ret < 0)
		{
			va_end(args);
			return (-1);
		}
		total += ret;
		if (from[i] == '%')
			i++;
		i++;
	}
	va_end(args);
	return (total);
}
