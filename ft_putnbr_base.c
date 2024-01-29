/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:49:22 by sahamzao          #+#    #+#             */
/*   Updated: 2024/01/07 17:03:49 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int num, const char *f, size_t *len)
{
	unsigned int	nb;
	char			*base;

	nb = num;
	if (*f == 'x')
		base = "0123456789abcdef";
	else if (*f == 'X')
		base = "0123456789ABCDEF";
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb = nb * (-1);
	}
	if (nb <= 15)
		ft_putchar(base[nb % 16], len);
	else
	{
		ft_putnbr_base((nb / 16), f, len);
		ft_putchar(base[nb % 16], len);
	}
}
