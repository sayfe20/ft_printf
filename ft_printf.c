/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 10:13:53 by sahamzao          #+#    #+#             */
/*   Updated: 2024/01/24 19:54:30 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(va_list arg, const char *f, size_t *len)
{
	if (*f == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (*f == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (*f == 'd')
		ft_putnbr(va_arg(arg, long), len);
	else if (*f == 'i')
		ft_putnbr(va_arg(arg, long), len);
	else if (*f == 'u')
		ft_putnbr_u(va_arg(arg, unsigned int), len);
	else if (*f == 'x' || *f == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), f, len);
	else if (*f == 'p')
		ft_putaddr(va_arg(arg, void *), len);
	else if (*f == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *f, ...)
{
	size_t	len;
	va_list	arg;

	len = 0;
	va_start(arg, f);
	if (!f)
		return (0);
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			ft_check(arg, f, &len);
		}
		else
			ft_putchar(*f, &len);
		if (*f)
			f++;
	}
	va_end(arg);
	return (len);
}
