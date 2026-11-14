/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-14 11:53:48 by cfaris            #+#    #+#             */
/*   Updated: 2026-11-14 11:53:48 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_putchar_len(char c);
int	ft_putstr_len(char *str);
int	ft_putnbr_len(int nbr);
int	ft_putunbr_len(unsigned int nbr);
int	ft_puthex_len(unsigned long nb, char *base);
int	ft_putptr_len(void *p);

#endif