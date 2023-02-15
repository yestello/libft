/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:25:29 by yestello          #+#    #+#             */
/*   Updated: 2023/02/13 09:37:21 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;
	int	len;

	len = 0;
	len = ft_strlen(s);
	str =  malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	str[] = "salut a tous";
	char	*result;

	result = ft_strdup(str);
	printf("%s", result);
	return (0);
}
