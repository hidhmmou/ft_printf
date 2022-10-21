/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:02:28 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/10/15 03:20:50 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char x, int *len)
{
	char	*base;

	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(base[nbr % 16], len);
	else
	{
		ft_putnbr_base(nbr / 16, x, len);
		ft_putnbr_base(nbr % 16, x, len);
	}
}
