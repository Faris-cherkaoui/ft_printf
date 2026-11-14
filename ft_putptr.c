/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-14 11:01:41 by cfaris            #+#    #+#             */
/*   Updated: 2026-11-14 11:01:41 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_len(void *p)
{
	int	len;
	int	ret;

	if (!p)
		return (ft_putstr_len("(nil)"));
	len = ft_putstr_len("0x");
	if (len < 0)
		return (-1);
	ret = ft_puthex_len((unsigned long)p, HEX_LOW);
	if (ret < 0)
		return (-1);
	len += ret;
	return (len);
}
