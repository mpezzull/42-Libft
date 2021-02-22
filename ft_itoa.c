/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:28:12 by mpezzull          #+#    #+#             */
/*   Updated: 2021/01/20 14:51:16 by mpezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(long n)
{
	int i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int num)
{
	char		*dst;
	int			count;
	int			i;
	long		n;

	n = num;
	count = ft_count_size(n);
	i = 0;
	if (n < 0 || count == 0)
		count++;
	if (!(dst = (char *)malloc(count * sizeof(char) + 1)))
		return (NULL);
	dst[count] = 0;
	if (n < 0)
	{
		n = -n;
		dst[0] = '-';
		i++;
	}
	while (count-- > i)
	{
		dst[count] = (n % 10) + '0';
		n = n / 10;
	}
	return (dst);
}
