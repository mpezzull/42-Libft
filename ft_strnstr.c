/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:48:04 by mpezzull          #+#    #+#             */
/*   Updated: 2021/01/20 14:46:19 by mpezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int			len_str;
	int			len_to_find;
	size_t		i;

	i = 0;
	len_to_find = ft_strlen(to_find);
	len_str = ft_strlen(str);
	if (len_to_find == 0)
		return (char *)(str);
	while (str[i + len_to_find - 1] != '\0' && len_str >= len_to_find
			&& (i + len_to_find) <= len)
	{
		if (ft_strncmp(str + i, to_find, len_to_find) == 0)
		{
			return (char *)(str + i);
		}
		i++;
	}
	return (0);
}
