/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:20:22 by yestello          #+#    #+#             */
/*   Updated: 2023/02/07 13:08:37 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned const char 	*s;

	str = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (dest);

}

int	main()
{
	char	str[] = "bonjour";
	char	dest[] = "a tous";
	char	a[] = "bonjour";
	char	b[] = "a tous";
	char	*tmp;
	char	*raf;

	tmp = dest;
	ft_memcpy(dest, str, 5);
	printf("%s", tmp);
	raf = b;
	memcpy(b, a, 5);
	printf("\n%s", b);


}
