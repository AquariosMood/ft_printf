/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:00:21 by crios             #+#    #+#             */
/*   Updated: 2024/05/28 09:27:05 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	while (*dest && i < destsize)
	{
		++dest;
		++i;
	}
	ret = ft_strlcpy(dest, src, destsize - i);
	return (ret + i);
}
