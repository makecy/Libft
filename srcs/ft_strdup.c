/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefano <mstefano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:31:36 by mstefano          #+#    #+#             */
/*   Updated: 2025/02/18 16:57:54 by mstefano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	len;
	size_t	i;

	a = (char *)s1;
	len = ft_strlen(s1);
	a = malloc(len * sizeof(char) + 1);
	if (!a)
	{
		return (NULL);
	}
	i = 0;
	while (len > i)
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
