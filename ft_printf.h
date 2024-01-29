/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:02:11 by sahamzao          #+#    #+#             */
/*   Updated: 2024/01/14 15:22:33 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putstr(const char *r, size_t *len);
void	ft_putnbr_base(int num, const char *f, size_t *len);
void	ft_putchar(char c, size_t *len);
void	ft_putnbr(int num, size_t *len);
void	ft_putnbr_u(unsigned long num, size_t *len);
int		ft_printf(const char *f, ...);
void	ft_putaddr(void *p, size_t *len);
#endif
