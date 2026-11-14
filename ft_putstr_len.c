/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 18:18:28 by cfaris            #+#    #+#             */
/*   Updated: 2026-11-13 18:18:28 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *str)
{
	int	i;
	int	ret;
	int	len;

	if (!str)
		str = "(null)";
	len = 0;
	i = 0;
	while (str[i])
	{
		ret = ft_putchar_len(str[i]);
		if (ret < 0)
			return (-1);
		len += ret;
		i++;
	}
	return (len);
}
