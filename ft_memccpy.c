/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:40:38 by mpezzull          #+#    #+#             */
/*   Updated: 2021/01/20 14:53:28 by mpezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_memmcpy(void *dest, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	d = dest;
	s = src;
	if (d == NULL && s == NULL)
		return (dest);
	while (len--)
		*d++ = *s++;
	return (d);
}

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void *p;

	p = ft_memchr(src, c, n);
	if (p != (NULL))
		return (ft_memmcpy(dest, src, p - src + 1));
	ft_memcpy(dest, src, n);
	return (NULL);
}
