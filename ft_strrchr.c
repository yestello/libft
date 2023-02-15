/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yestello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:30:02 by yestello          #+#    #+#             */
/*   Updated: 2023/02/15 18:30:19 by yestello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = &((char*)s)[i];
		i++;
	}
	if (c == '\0')
		ret = &((char*)s)[i];
	return (ret);
}
/*
int main(void)
{
    const char *str = "Bonjour tout le monde";
    char c = 'o';
    char *res;

    res = ft_strrchr(str, c);
    printf("La dernière occurrence de '%c' dans la chaîne '%s' est à l'adresse : %s\n", c, str, res);

    return 0;
}*/
