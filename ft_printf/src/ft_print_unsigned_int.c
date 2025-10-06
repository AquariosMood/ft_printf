/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:32:54 by crios             #+#    #+#             */
/*   Updated: 2024/05/29 15:06:04 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int	print_unsigned_int(va_list args)
{
	unsigned int	n;
	int				len;
	char			buffer[10];
	char			*ptr;

	n = va_arg(args, unsigned int);
	len = 0;
	ptr = &buffer[9];
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	while (n > 0)
	{
		*ptr-- = (n % 10) + '0';
		n /= 10;
	}
	ptr++;
	while (*ptr)
	{
		ft_putchar_fd(*ptr++, 1);
		len++;
	}
	return (len);
}
