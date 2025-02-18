/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefano <mstefano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:25:08 by mstefano          #+#    #+#             */
/*   Updated: 2025/02/18 16:57:54 by mstefano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dst;
	if (d == s)
		return (dst);
	if (len + s <= d || len + d <= s)
		while (len--)
			*d++ = *s++;
	else if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += len;
		s += len;
		while (len--)
		{
			*(--d) = *(--s);
		}
	}
	return (dst);
}
