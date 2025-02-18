/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefano <mstefano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:51:13 by mstefano          #+#    #+#             */
/*   Updated: 2025/02/18 16:57:54 by mstefano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s;
	b = NULL;
	while (n--)
	{
		if (*a != (unsigned char)c)
			a++;
		else
		{
			b = a;
		}
	}
	return (b);
}
