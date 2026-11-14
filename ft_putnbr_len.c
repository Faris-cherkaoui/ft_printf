/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 17:15:55 by cfaris            #+#    #+#             */
/*   Updated: 2026-11-13 17:15:55 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_len(int nbr)
{
	int		len;
	long	nb;
	int		ret;

	nb = nbr;
	len = 1;
	if (nb < 0)
	{
		if (ft_putchar_len('-') < 0)
			return (-1);
		len++;
		nb = -nb;
	}
	if (nb >= 10)
	{
		ret = ft_putnbr_len(nb / 10);
		if (ret < 0)
			return (-1);
		len += ret;
	}
	if (ft_putchar_len(nb % 10 + '0') < 0)
		return (-1);
	return (len);
}
