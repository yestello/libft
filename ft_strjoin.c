/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:03:29 by yestello          #+#    #+#             */
/*   Updated: 2023/02/13 16:47:32 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char *) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	i = 0;
	while (s2[i])
	{
		str[len1] = s2[i];
		len1++;
		i++;
	}
	str[len1] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str[] = "bonjour a ";
	char	str1[] = "tout le monde";
	char	*result;

	result = ft_strjoin(str, str1);
	printf("%s", result);
	return (0);
}*/
