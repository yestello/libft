/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:26:54 by yestello          #+#    #+#             */
/*   Updated: 2023/02/13 11:19:26 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	if (nptr[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == 43)
		i++;
	while (nptr[i] != '\0' && nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10;
		result = result + nptr[i] - 48;
		i++;
	}
	return (result * sign);
}
