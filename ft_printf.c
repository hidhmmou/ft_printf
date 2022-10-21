/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:55:31 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/10/15 20:00:18 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flag(va_list args, const char format, int *len)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (format == 'X' || format == 'x')
		ft_putnbr_base(va_arg(args, int), format, len);
	else if (format == '%')
		ft_putchar(format, len);
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	else if (format == 'p')
		ft_putptr(va_arg(args, void *), len);
}

int	ft_printf(const	char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check_flag(args, *format, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
