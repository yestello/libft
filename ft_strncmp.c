/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:37:07 by yestello          #+#    #+#             */
/*   Updated: 2023/02/13 11:40:10 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] && '\0' && i < n)
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	str[] = "12313";
	char	p[] = "12315";
	int	i;

	i = ft_strncmp(str, p, 4);
	printf("%d", i);
	return (0);

}
