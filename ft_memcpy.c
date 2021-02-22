/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:41:11 by mpezzull          #+#    #+#             */
/*   Updated: 2021/01/20 14:54:15 by mpezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = dest;
	s = (char *)src;
	if (d == NULL && s == NULL)
		return (dest);
	while (len--)
		*d++ = *s++;
	return (dest);
}
