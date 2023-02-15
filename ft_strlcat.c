/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:55:09 by yestello          #+#    #+#             */
/*   Updated: 2023/02/07 16:05:49 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;

	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (j < size)
		dst[i] = '\0';
	i = 0;
	while (dst[i])
		i++;

	return (j + i);
}

#include <string.h>
#include <bsd/string.h>
int	main()
{
	char	str[30] = "bonjour";
	char	s[] = " a tous";
	int	p;


	ft_strlcat(str, s, 15);
	printf("%s", str);
	p =  ft_strlcat(str, s, 15);
	printf("%d", p);

	char	a[30] = "bonjour";
	char	b[] = " a tous";
	int	c;


	strlcat(a, b, 15);
	printf("%s", a);
	c =  strlcat(a, b, 15);
	printf("%d", c);
}
