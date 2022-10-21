/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:55:16 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/10/16 23:17:03 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nbr, int *len)
{
	if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else
	{
		ft_putnbr_u(nbr / 10, len);
		ft_putnbr_u(nbr % 10, len);
	}
}
