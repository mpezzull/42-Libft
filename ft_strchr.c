/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:58:11 by mpezzull          #+#    #+#             */
/*   Updated: 2021/01/21 19:40:11 by mpezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (*s == 0 && uc == 0)
		return (char *)s;
	while ((*s && uc) || uc == 0)
	{
		if (*s == uc)
			return (char *)s;
		s++;
	}
	return (0);
}
