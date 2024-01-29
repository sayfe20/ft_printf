/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:06:56 by sahamzao          #+#    #+#             */
/*   Updated: 2024/01/07 20:07:59 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_che(unsigned long pr, size_t *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (pr <= 15)
		ft_putchar(base[pr % 16], len);
	else
	{
		ft_che(pr / 16, len);
		ft_putchar(base[pr % 16], len);
	}
}

void	ft_putaddr(void *p, size_t *len)
{
	unsigned long	pr;

	pr = (unsigned long)p;
	ft_putstr("0x", len);
	ft_che(pr, len);
}
