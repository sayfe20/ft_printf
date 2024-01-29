/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:52:40 by sahamzao          #+#    #+#             */
/*   Updated: 2024/01/07 18:59:54 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned long num, size_t *len)
{
	if (num <= 9)
		ft_putchar((num % 10) + 48, len);
	else
	{
		ft_putnbr((num / 10), len);
		ft_putchar((num % 10) + 48, len);
	}
}
