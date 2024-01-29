/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:29:59 by sahamzao          #+#    #+#             */
/*   Updated: 2024/01/07 17:52:20 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, size_t *len)
{
	long	nb;

	nb = num;
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb = nb * (-1);
	}
	if (nb <= 9)
		ft_putchar((nb % 10) + 48, len);
	else
	{
		ft_putnbr((nb / 10), len);
		ft_putchar((nb % 10) + '0', len);
	}
}
