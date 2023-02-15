/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:48:36 by yestello          #+#    #+#             */
/*   Updated: 2023/02/09 13:22:04 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (str[i] ==  (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "bonjour tout le monde";
	char	*ptr;
	int	c;
	size_t	size;

	c = 'j';
	size = 21;

	ptr = ft_memchr(str, c, size);
	printf("%s", ptr);
	return (0);
}
