/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:37:24 by yestello          #+#    #+#             */
/*   Updated: 2023/02/10 10:55:46 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len)
	{
		while (big[i + j] == little[j] && i + j != len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "salut a tous";
	char	find[] = "lut";
	int	len;

	len = 12;
	printf("%s", ft_strnstr(str, find, len));
	return (0);
}
