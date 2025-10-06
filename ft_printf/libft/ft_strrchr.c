/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crios <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:16:49 by crios             #+#    #+#             */
/*   Updated: 2024/05/24 13:37:24 by crios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ret;

	ret = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ret = s;
		++s;
	}
	if (*s == (char)c)
		return ((char *)s);
	if (c == '\0' && ret == s)
		return ((char *)s);
	return ((char *)ret);
}
