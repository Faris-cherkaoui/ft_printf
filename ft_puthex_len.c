/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 19:25:48 by cfaris            #+#    #+#             */
/*   Updated: 2026-11-13 19:25:48 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_len(unsigned long n, char *base)
{
	int	len;
	int	ret;

	len = 1;
	if (n >= 16)
	{
		ret = ft_puthex_len(n / 16, base);
		if (ret < 0)
			return (-1);
		len += ret;
	}
	if (ft_putchar_len(base[n % 16]) < 0)
		return (-1);
	return (len);
}
