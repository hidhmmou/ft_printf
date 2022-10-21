/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:02:28 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/10/16 23:17:12 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_helper(unsigned long int nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar(base[nbr % 16], len);
	else
	{
		ft_helper(nbr / 16, len);
		ft_helper(nbr % 16, len);
	}
}

void	ft_putptr(void *adress, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)adress;
	ft_putstr("0x", len);
	ft_helper(ptr, len);
}
