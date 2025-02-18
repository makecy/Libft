/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefano <mstefano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:58:55 by mstefano          #+#    #+#             */
/*   Updated: 2025/02/18 16:57:54 by mstefano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;	

	i = 0;
	j = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45)
	{
		j = -j;
		str++;
	}
	else if (*str == 43)
		str++;
	while (*str >= 48 && *str <= 57)
	{
		i = i * 10 + (*str - 48);
		str++;
	}
	return (i * j);
}
