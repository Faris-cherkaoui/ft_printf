/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 18:23:46 by cfaris            #+#    #+#             */
/*   Updated: 2026-11-13 18:23:46 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_len(unsigned int nbr)
{
	int	ret;
	int	len;

	len = 1;
	if (nbr >= 10)
	{
		ret = ft_putunbr_len(nbr / 10);
		if (ret < 0)
			return (-1);
		len += ret;
	}
	if (ft_putchar_len(nbr % 10 + '0') < 0)
		return (-1);
	return (len);
}
