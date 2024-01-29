/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:45:20 by sahamzao          #+#    #+#             */
/*   Updated: 2024/01/07 19:00:36 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *r, size_t *len)
{
	if (!r)
	{
		r = "(null)";
		ft_putstr(r, len);
	}
	else
	{
		while (*r)
		{
			ft_putchar(*r, len);
			r++;
		}
	}
}
