/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:57:06 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/10/16 23:15:12 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int		ft_printf(const	char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbr_base(unsigned int nbr, char x, int *len);
void	ft_putnbr_u(unsigned int nbr, int *len);
void	ft_putptr(void *adress, int *len);

#endif