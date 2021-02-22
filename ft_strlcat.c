/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:44:47 by mpezzull          #+#    #+#             */
/*   Updated: 2021/01/20 16:00:17 by mpezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len_dest;
	size_t len_src;

	len_src = ft_strlen(src);
	len_dest = (ft_strlen(dest) < size ? ft_strlen(dest) : size);
	if (size == len_dest)
		return (len_src + len_dest);
	if (len_src < size - len_dest)
	{
		ft_memcpy(dest + len_dest, src, len_src + 1);
	}
	else
	{
		ft_memcpy(dest + len_dest, src, size - len_dest - 1);
		dest[size - 1] = 0;
	}
	return (len_src + len_dest);
}
