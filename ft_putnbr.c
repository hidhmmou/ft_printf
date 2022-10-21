/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:25:40 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/10/16 23:15:40 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-', len);
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar(nb + '0', len);
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}
