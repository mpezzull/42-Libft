/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:51:57 by mpezzull          #+#    #+#             */
/*   Updated: 2021/01/14 19:29:25 by mpezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *found;
	const char *p;

	c = (unsigned char)c;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	found = NULL;
	p = ft_strchr(s, c);
	while (p != NULL)
	{
		found = p;
		s = p + 1;
		p = ft_strchr(s, c);
	}
	return ((char *)found);
}
